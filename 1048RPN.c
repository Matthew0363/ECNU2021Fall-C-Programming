#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define MAXOP 100
#define NUMBER '0'
#define BUFSIZE 100
#define MAXVAL 100
int sp = 0;
int val[MAXVAL];
char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
  return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{

  buf[bufp++] = c;
}

int getop(char s[])
{
  int i, c;
  while ((s[0] = c = getch()) == ' ' || c == '\t')
    ;
  s[1] = '\0';
  if (!isdigit(c) && c != '.' && c != '-')
    return c;
  i = 0;
  if (c == '-')
  {
    c = getch();
    if (!isdigit(c))
    {
      ungetch(c);
      return '-';
    }
    s[++i] = c;
  }
  if (isdigit(c))
    while (isdigit(s[++i] = c = getch()))
      ;
  if (c == '.')
    while (isdigit(s[++i] = c = getch()))
      ;
  s[i] = '\0';
  if (c != EOF)
    ungetch(c);
  return NUMBER;
}
void PUSH(int f)
{

  val[sp++] = f;
}
int POP(void)
{

  return val[--sp];
}

int main()
{
  int type;
  int op2;
  char s[MAXOP];

  while ((type = getop(s)) != EOF)
  {
    switch (type)
    {
    case NUMBER:
      PUSH(atof(s));
      break;
    case '+':
      PUSH(POP() + POP());
      break;
    case '*':
      PUSH(POP() * POP());
      break;
    case '-':
      op2 = POP();
      PUSH(POP() - op2);
      break;
    case '/':
      op2 = POP();
      PUSH(POP() / op2);
      break;
    case '%':
      op2 = POP();
      PUSH(POP() % op2);
      break;
    case '\n':
      printf("%d\n", POP());
      break;
    }
  }
  return 0;
}
