/*
srBaseNum: 原进制下的数
srBse: 原进制的基
destBase: 目标进制的基
destBaseNum：转换后的数 
*/ 
int numBaseConversion(int srBaseNum, int srBase, int destBase)
{
    unsigned int destBaseNum=0, i=0;
    while (srBaseNum != 0){
        destBaseNum += (srBaseNum % destBase) * pow(srBase,i);
        srBaseNum /= destBase;
        i ++;
    }
    return destBaseNum;
}
