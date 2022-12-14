#ifndef BASICCALCULATOR_H_INCLUDED
#define BASICCALCULATOR_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void menuBasic()
{
    printf("\n\t\t------------------------------------------------\n");
    printf("\t\tBasic Calculator Menu\n");
    printf("\t\t------------------------------------------------\n");
    printf("\t\t1. Addition\n\t\t2. Subtraction\n\t\t3. Multiplication\n\t\t4. Division\n\t\t5. Modulas\n\t\t6. Power Function\n\t\t7. Root Function\n\t\t8. Return to main menu\n");
    printf("\t\t------------------------------------------------\n");
}

int basicCalculator()
{
    int choice;
    while (1)
    {
        menuBasic();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            float a, b;
            printf("Enter two digits: ");
            scanf("%f %f", &a, &b);
            printf("Sum is: %.4f", a + b);
            break;
        }
        case 2:
        {
            float a, b;
            printf("Enter two digits: ");
            scanf("%f %f", &a, &b);
            printf("Subtraction is: %.4f", a - b);
            break;
        }
        case 3:
        {
            float a, b;
            printf("Enter two digits: ");
            scanf("%f %f", &a, &b);
            printf("Multiplication is: %.4f", a * b);
            break;
        }
        case 4:
        {
            float a, b;
            printf("Enter two digits in order(descending): ");
            scanf("%f %f", &a, &b);
            printf("Division is: %.4f", a / b);
            break;
        }
        case 5:
        {
            int a, b;
            printf("Enter two digits: ");
            scanf("%d %d", &a, &b);
            printf("Modulas is: %d", a % b);
            break;
        }
        case 6:
        {
            float a, b;
            printf("Enter two digits: ");
            scanf("%f %f", &a, &b);
            printf("Result of %.2f power %.2f is: %.4f",a,b, pow(a, b));
            break;
        }
        case 7:
        {
            float a;
            printf("Enter digit: ");
            scanf("%f", &a);
            printf("Sum is: %.4f", sqrt(a));
            break;
        }
        case 8:
            {
                printf("Returning to main menu");
                return;
            }
        default:
            printf("Invalid choice!!!");
        }
    }
}

#endif // BASICCALCULATOR_H_INCLUDED
