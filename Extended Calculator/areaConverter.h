#ifndef AREACONVERTER_H_INCLUDED
#define AREACONVERTER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "allheaderfile.h"
void menuArea()
{
    printf("\n\t\tArea Calculation Menu\n");
    printdash();
    printf("\t\t1. Square meter to others\n\t\t2. Square Centimeter to others\n\t\t3. Square foot to others\n\t\t4. Square kilometer to others\n");
}
void meterConverter() {}
void centimeterConverter() {}
void footConverter() {}
void kmConverter() {}

void areaConverter()
{
    int choice;
    while (1)
    {
        menuArea();
        printf("Enter choice: ");
        switch (choice)
        {
        case 1:
        {
            meterConverter();
            break;
        }
        case 2:
        {
            centimeterConverter();
            break;
        }
        case 3:
        {
            footConverter();
            break;
        }
        case 4:
        {
            kmConverter();
            break;
        }

        default:
        {
            printf("Invalid choice!!\n");
            break;
        }
        }
    }
}
#endif // AREACONVERTER_H_INCLUDED
