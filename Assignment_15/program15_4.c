#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;
    int iCnt = 0;

    if(iNo1 != 0)
    {
        iMult = iMult * iNo1;
        iCnt++;
    }
    if(iNo2 != 0)
    {
        iMult = iMult * iNo2;
        iCnt++;
    }
    if(iNo3 != 0)
    {
        iMult = iMult * iNo3;
        iCnt++;
    }

    if(iCnt == 0)
    {
        return 0;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0,iValue2 = 0, iValue3 = 0, iRet = 0;
    printf("Please enter three numbers : \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);
    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("%d",iRet);
    return 0;
}