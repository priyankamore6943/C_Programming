#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 1;
    int iMult = 1;

    while(iCnt < iNo)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
        iCnt++;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}