#ifndef UNITCONVERTER_H_INCLUDED
#define UNITCONVERTER_H_INCLUDED
#include "temperatureConverter.h"
#include "massConverte.h"
#include "areaCalculator.h"
#include "lengthConverter.h"
#include "areaConverter.h"
void unitMenu()
{
    printf("\t\t------------------------------------------------\n");
    printf("\t\t\tUnit Converter Menu\n");
    printf("\t\t------------------------------------------------\n");
    printf("\t\t1. Temperature Converter\n\t\t2. Mass Converter\n\t\t3. Area Converter\n\t\t4. Length Converter\n\t\t5. Area Calculation\n\t\t6. Return to Main menu\n");
    printf("\t\t------------------------------------------------\n");
}
void unitConverter()
{
    int choice;

    while (1)
    {
        unitMenu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        system("cls");
        switch (choice)
        {
        case 1:
        {
            temperature();
            break;
        }
        case 2:
        {
            massCalculation();
            break;
        }
        case 3:
        {
            areaConverter();
            break;
        }
        case 4:
        {
            length();
            break;
        }
        case 5:
        {
            areaCalculator();
            break;
        }
        case 6:
        {
            return;
        }
        default:
        {
            printf("Invalid choice!!!!\n");
        }
        }
    }
}
#endif // UNITCONVERTER_H_INCLUDED
