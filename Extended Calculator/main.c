#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "basicCalculator.h"
#include "cgpa.h"
#include "electricityBill.h"
#include "unitConverter.h"
#include "statCalculation.h"
#include "matrixCalculator.h"
#include "numberSystemConv.h"

void mainMenu()
{
    printf("\n\t\t------------------------------------------------\n");
    printf("\t\t\t\tMain Menu\n");
    printf("\t\t------------------------------------------------\n");
    printf("\t\t1. Basic Calculator\n\t\t2. Unit Converter\n\t\t3. CGPA Calculator\n\t\t4. Electricity Converter\n\t\t5. Matrix Calculator\n\t\t6. Statistical Calculator\n\t\t7. Number System Converter\n\t\t8. Exit Program\n");
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
        system("cls");
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
            printf("\n");
            statCalculation();
            break;
        }
        case 7:
        {
            printf("\n");
            numberSystemConverter();
            break;
        }
        case 8:
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
        
    }
    return 0;
}
