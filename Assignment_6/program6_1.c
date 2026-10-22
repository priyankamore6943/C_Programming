// Calculate electricity bill.


#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid Units\n");
    }
    else if(iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
        printf("Electricity Bill: Rs. %.2f\n", fBill);
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
        printf("Electricity Bill: Rs. %.2f\n", fBill);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.0f)
                + ((iUnits - 200) * 10.0f);
        printf("Electricity Bill: Rs. %.2f\n", fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter electricity units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
