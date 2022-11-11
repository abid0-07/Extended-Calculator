#ifndef LENGTHCONVERTER_H_INCLUDED
#define LENGTHCONVERTER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void lengthMenu()
{
    printf("\t\t------------------------------------------------\n");
    printf("\t\t\tLength Menu\n");
    printf("\t\t------------------------------------------------\n");
    printf("\t\t1. Kilometer to others\n\t\t2. Meter to others\n\t\t3. Mile to others\n\t\t4. Foot to others\n");
}
void kilometer(float km)
{
    float m, ml, f;
    m = km * 1000.0;
    ml = km * 0.621371;
    f = km * 3280.84;
    printf("result in meter: %.4f\n", m);
    printf("result in mile: %.4f\n", ml);
    printf("result in foot: %.4f\n", f);
}
void meter(float m)
{
    float km, ml, f;
    km = m / 1000;
    ml = m * 0.000621371;
    f = m * 3.28084;
    printf("result in kilometer: %.4f\n", km);
    printf("result in mile: %.4f\n", ml);
    printf("result in foot: %.4f\n", f);
}
void miler(float ml)
{

    float km, m, f;
    km = ml / 0.621371;
    m = ml / 0.000621371;
    f = ml * 5280;
    printf("result in kilometer: %.4f\n", km);
    printf("result in meter: %.4f\n", m);
    printf("result in foot: %.4f\n", f);
}
void foot(float f)
{
    float km, m, ml;
    km = f * 0.0003048;
    ml = f * 0.000189394;
    m = f * 0.3048;
    printf("result in kilometer: %.4f\n", km);
    printf("result in mile: %.4f\n", ml);
    printf("result in meter: %.4f\n", m);
}
void length()
{
    int choice;
    while (1)
    {
        lengthMenu();
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            float km;
            printf("Enter value in kilometer: ");
            scanf("%f", &km);
            kilometer(km);
            break;
        }
        case 2:
        {
            float m;
            printf("Enter value in meter: ");
            scanf("%f", &m);
            meter(m);
            break;
        }
        case 3:
        {
            float ml;
            printf("Enter value in mile: ");
            scanf("%f", &ml);
            miler(ml);
            break;
        }
        case 4:
        {
            float f;
            printf("Enter value in foot: ");
            scanf("%f", &f);
            foot(f);
            break;
        }
        default:
        {
            printf("Invalid choice!!!!");
            break;
        }
        }
    }
}

#endif // LENGTHCONVERTER_H_INCLUDED
