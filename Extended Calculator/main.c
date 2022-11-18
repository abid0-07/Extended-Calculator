#include <stdio.h>
#include <stdlib.h>

#include "basicCalculator.h"
#include "cgpa.h"
#include "electricityBill.h"
#include "unitConverter.h"
#include "statCalculation.h"
#include "matrixCalculator.h"

void mainMenu()
{
    printf("\n\t\t------------------------------------------------\n");
    printf("\t\t\t\tMain Menu\n");
    printf("\t\t------------------------------------------------\n");
    printf("\t\t1. Basic Calculator\n\t\t2. Unit Converter\n\t\t3. CGPA Calculator\n\t\t4. Electricity Converter\n\t\t5. Matrix Calculator\n\t\t6. Statistical Calculator\n\t\t7. Exit Program\n");
    printf("\t\t------------------------------------------------\n");
}

int main()
{
    int choice;
    while (1)
    {
        mainMenu();
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\n");
            basicCalculator();
            break;
        }
        case 2:
        {
            printf("\n");
            unitConverter();
            break;
        }
        case 3:
        {
            printf("\n");
            cgpa();
            break;
        }
        case 4:
        {
            printf("\n");
            electricityBill();
            break;
        }
        case 5:
        {
            printf("\n");
            matrixCalculator();
            break;
        }
        case 6:
        {
            statCalculation();
            printf("\n");
            break;
        }
        case 7:
        {
            printf("\n");
            printf("Exiting program\n");
            exit(0);
        }
        default:
        {
            printf("Invalid Choice\n");
            break;
        }
        }
        printf("\n");
        printf("\n");
    }
    return 0;
}
