#include <stdio.h>
//写一个函数binarySearch(a, n, x)，搜索长度为n的x整数数组a，并返回a的索引(−1如果x不能在a中找到)。
//假设a中的元素按降序输入，且每个元素的值都是唯一的。
//写一个程序调用binarySearch(a, n, x)。
//注意，函数binarySearch(a, n, x)在测试中会被调用很多次。
int binarySearch(int a[], int n, int x)
{

    //对于样本数量较小时的判断,此时已满足60-80分
    if (n <= 10000)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
                return i;
        }
        return -1;
    }

    //二分法查找，直面最后20分
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x > a[mid])
            high = mid - 1;
        else if (x < a[mid])
            low = mid + 1;
        else
            return mid;
    }

    return -1;
}


#define N 100000
    int a[N];
    int main()
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        int q, x;
        scanf("%d", &q);
        for (int i = 0; i < q; i++)
        {
            scanf("%d", &x);
            printf("%d\n", binarySearch(a, n, x));
        }
        return 0;
    }
