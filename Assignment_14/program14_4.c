#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 1;
    int iSum = 0;

    while(iCnt < iNo)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}