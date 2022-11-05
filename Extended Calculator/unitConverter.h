#ifndef UNITCONVERTER_H_INCLUDED
#define UNITCONVERTER_H_INCLUDED
#include "temperatureConverter.h"
#include "massConverte.h"
#include "areaCalculator.h"
#include "lengthConverter.h"
#include "areaConverter.h"
void unitMenu()
{
    printdash();
    printf("\t\t\tUnit Converter Menu\n");
    printdash();
    printf("\t\t1. Temperature Converter\n\t\t2. Mass Converter\n\t\t3. Area Converter\n\t\t4. Length Converter\n\t\t5. Area Calculation\n");
    printdash();
}
void unitConverter()
{
    int choice;
    int k = 1;
    while (k)
    {
        unitMenu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
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
        default:
        {
            printf("Invalid choice!!!!\n");
        }
        }
        printf("Do yo wish to continue?\nIf yes, please enter 1 otherwise 0!!\n");
        scanf("%d", &k);
    }
}
#endif // UNITCONVERTER_H_INCLUDED
