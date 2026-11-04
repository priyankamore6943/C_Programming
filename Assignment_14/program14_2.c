#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    iCnt = iNo - 1;

    while(iCnt >= 1)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
        iCnt--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}