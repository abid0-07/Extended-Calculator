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
    printf("\t\t1. Square meter to others\n\t\t2. Square Centimeter to others\n\t\t3. Square feet to others\n\t\t4. Square kilometer to others\n");
}
void meterConverter()
{
    float meter;
    printf("Enter value in meter square to convert: ");
    scanf("%f", &meter);
    float centimeter, km, feet;
    centimeter = meter * 10000.00;
    km = meter / (1000 * 1000);
    feet = meter * 10.7639;
    printf("Result in Centimeter Square: %.4f\n", centimeter);
    printf("Result in Kilometer Square: %.4f\n", km);
    printf("Result in Feet Square: %.4f\n", feet);
}
void centimeterConverter()
{
    double centimeter, km, meter, feet;
    printf("Enter value in centimeter to convert: ");
    scanf("%lf", &centimeter);
    meter = centimeter * 0.0001;
    feet = centimeter * 0.00107639;
    km = centimeter * 1e-10;
    printf("Result in Meter Square: %.4lf\n", meter);
    printf("Result in Kilometer Square: %.4lf\n", km);
    printf("Result in Feet Square: %.4lf\n", feet);
}
void feetConverter()
{
    double centimeter, km, meter, feet;
    printf("Enter value in Feet to convert: ");
    scanf("%lf", &feet);
    meter = feet * 0.092902999958790005719;
    centimeter = feet * 929.03;
    km = feet * 9.290299995879e-8;
    printf("Result in Meter Square: %.4lf\n", meter);
    printf("Result in Kilometer Square: %.4lf\n", km);
    printf("Result in Centimeter Square: %.4lf\n", centimeter);
}
void kmConverter()
{
    double centimeter, km, meter, feet;
    printf("Enter value in Kilometer to convert: ");
    scanf("%lf", &km);
    meter = km * 1e+6;
    centimeter = km * 1e+10;
    feet = km * 1.076e+7;
    printf("Result in Meter Square: %.4lf\n", meter);
    printf("Result in Feet Square: %.4lf\n", feet);
    printf("Result in Centimeter Square: %.4lf\n", centimeter);
}

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
            feetConverter();
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
