#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i == 1) || (i == iRow) || 
               (j == 1) || (j == iCol))
            {
                printf("*\t");
            }
            else if((i >= 2 && i <= 4) && 
                    (j >= 2 && j <= 4) && (i + j <= 7))
            {
                printf("#\t");
            }
            else if((i == 4 && j == 5) || 
                    (i == 5 && j >= 3 && j <= 5))
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}