#ifndef AREACONVERTER_H_INCLUDED
#define AREACONVERTER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menuArea()
{
    printf("\t\t------------------------------------------------\n");
    printf("\t\tArea Calculation Menu\n");
    printf("\t\t------------------------------------------------\n");
    printf("\t\t1. Square meter to others\n\t\t2. Square Centimeter to others\n\t\t3. Square feet to others\n\t\t4. Square kilometer to others\n\t\t5. Exit to unit menu\n");
    printf("\t\t------------------------------------------------\n");
}
void meterConverter()
{
    double meter;
    printf("Enter value in meter square to convert: ");
    scanf("%f", &meter);
    double centimeter, km, feet;
    centimeter = meter * 10000.00;
    km = meter / (1000 * 1000);
    feet = meter * 10.7639;
    printf("Result in Centimeter Square: %.4lf\n", centimeter);
    printf("Result in Kilometer Square: %.4lf\n", km);
    printf("Result in Feet Square: %.4lf\n", feet);
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

int areaConverter()
{
    int choice;
    while (1)
    {
        menuArea();
        printf("Enter choice: ");
        scanf("%d", &choice);
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
        case 5:
        {
            printf("\n");
            return;
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
