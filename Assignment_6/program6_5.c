// calculate employee bonus .


#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(fSalary <= 0.0f || iYears < 0)
    {
        printf("Invalid Input\n");
        return;
    }

    fBonus = (iYears > 10) ? fSalary * 0.15f :
             (iYears >= 5) ? fSalary * 0.10f :
             fSalary * 0.05f;

    printf("Bonus = %.2f\n", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}
