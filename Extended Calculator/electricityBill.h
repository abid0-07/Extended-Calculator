#ifndef ELECTRICITYBILL_H_INCLUDED
#define ELECTRICITYBILL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void printRate();
void electricityBill()
{
    double unit, result;
    printf("Enter used UNIT(Only for home uses): ");
    scanf("%lf", &unit);
    if (unit > 0.00 && unit <= 75.00)
    {
        result = unit * 3.80;
    }
    else if (unit > 75.00 && unit <= 200.00)
    {
        result = 75.00 * 3.80 + (unit - 75.00) * 5.14;
    }
    else if (unit > 200.00 && unit <= 300.00)
    {
        result = 75.00 * 3.80 + 125.00 * 5.14 + (unit - 200) * 5.36;
    }
    else if (unit > 300.00 && unit <= 400.00)
    {
        result = 75.00 * 3.80 + 125.00 * 5.14 + 100.00 * 5.36 + (unit - 300) * 5.63;
    }
    else if (unit > 400.00 && unit <= 600.00)
    {
        result = 75.00 * 3.80 + 125.00 * 5.14 + 100.00 * 5.36 + 100.00 * 5.63 + (unit - 400) * 8.70;
    }
    else
    {
        result = 75.00 * 3.80 + 125.00 * 5.14 + 100.00 * 5.36 + 200.00 * 5.63 + 200.00 * 8.70 + (unit - 600.00) * 9.98;
    }

    printRate();
    printf("\nYour used UNIT: %.4lf\n", unit);
    printf("Your bill is : %.4f\n", result);
}
void printRate()
{
    printf("\nFrom 000 to 075 units costs BTD 3.80\n");
    printf("\nFrom 076 to 200 units costs BTD 5.14\n");
    printf("\nFrom 201 to 300 units costs BTD 5.36\n");
    printf("\nFrom 301 to 400 units costs BTD 5.63\n");
    printf("\nFrom 401 to 600 units costs BTD 8.70\n");
    printf("\nFrom 601 to above units costs BTD 9.98\n");
}

#endif // ELECTRICITYBILL_H_INCLUDED
