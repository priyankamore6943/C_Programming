#include<stdio.h>

double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    dMeter = iValue * 0.092903;

    return dMeter;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in sqaure feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is : %f\n",dRet);

    return 0;
}