#include<stdio.h>

int SumDiff(int iNo)
{
    int iCnt = 1;
    int iFactSum = 0;
    int iNonFactSum = 0;

    while(iCnt < iNo)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
        iCnt++;
    }

    return (iFactSum - iNonFactSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumDiff(iValue);

    printf("%d",iRet);

    return 0;
}