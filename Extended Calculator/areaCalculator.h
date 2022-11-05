#ifndef AREACALCULATOR_H_INCLUDED
#define AREACALCULATOR_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "allheaderfile.h"
#define pi 22 / 7

void menu();
double equTri();
double isoTri();
double scaTri();

void areaCalculator()
{
    int choice;
    while (1)
    {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            double ans;
            ans = equTri();
            printf("%.4lf is the area of the Triangle\n", ans);
            break;
        }
        case 2:
        {
            double ans;
            ans = isoTri();
            printf("%.4lf is the area of the Triangle\n", ans);
            break;
        }
        case 3:
        {
            double ans;
            ans = scaTri();
            printf("%.4lf is the area of the Triangle\n", ans);
            break;
        }
        case 4:
        {
            double a, b, result;
            printf("Enter the value of rectangle arms: ");
            scanf("%lf %lf", &a, &b);
            result = a * b;
            printf("%.4lf is the area of the Rectangle\n", result);
            break;
        }
        case 5:
        {
            double a, ans;
            printf("Enter the value of square: ");
            scanf("%lf", &a);
            ans = a * a;
            printf("%.4lf is the area of the Square\n", ans);
            break;
        }
        case 6:
        {
            double a, b, h, result;
            printf("Enter the value of parallal arms: ");
            scanf("%lf %lf", &a, &b);
            printf("Enter the value of height: ");
            scanf("%lf", &h);
            result = ((a + b) * h) / 2;
            printf("%.4lf is the radius of the Trapizium\n", result);
            break;
        }
        case 7:
        {
            double r, result;
            printf("Enter the value of radius: ");
            scanf("%lf", &r);
            result = pi * r * r;
            printf("%.4lf is the radius of the Circle\n", result);
            break;
        }
        default:
            printf("\nEnter valid choice between 1 to 7\n");
        }
    }
}
void menu()
{
    printdash();
    printf("\t\t\tArea Calculator\n");
    printf("\t\t1. Equilateral Triangle\n2. Isoceles Triangle\n3. Scalene Triangle\n4. Rectangle\n5. Square\n6. Trapizium\n7. Circle");
    printdash();
}
double equTri()
{
    printf("Enter the value of arm: ");
    double a, result;
    result = (sqrt(3) / 4) * pow(a, 2);
    return result;
}
double isoTri()
{
    double a, b, result;
    printf("\nEnter the value of base or non equal side: ");
    scanf("%lf", &b);
    printf("\nEnter the value of equal sides: ");
    scanf("%lf", &b);
    result = .5 * (sqrt((a * a) - ((b * b) / 4)) * b);
    return result;
}
double scaTri()
{
    double a, b, c, s, result;
    printf("\nEnter the value of the triangle's arm: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2.0;
    result = sqrt(s * (s - a) * (s - b) * (s - c));
    return result;
}

#endif // AREACALCULATOR_H_INCLUDED