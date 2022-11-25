#ifndef MASSCONVERTE_H_INCLUDED
#define MASSCONVERTE_H_INCLUDED

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void kilogram(double x)
{
    double g, mg, lb;
    g = x * 1000.0;
    mg = x * 1000000.0;
    lb = x * 2.205;
    printf("\nResult in gram unit: %lf", g);
    printf("\nResult in miligram unit: %lf", mg);
    printf("\nResult in pound unit: %lf", lb);
}
void gram(double x)
{
    double kg, mg, lb;
    kg = x / 1000.0;
    mg = x * 1000.0;
    lb = x / 453.6;
    printf("\nResult in kilogram unit: %lf", kg);
    printf("\nResult in miligram unit: %lf", mg);
    printf("\nResult in pound unit: %lf", lb);
}
void miligram(double x)
{
    double g, kg, lb;
    g = x / 1000.0;
    kg = x / 1000000.0;
    lb = x / 453600.0;

    printf("\nResult in kilogram unit: %lf", kg);
    printf("\nResult in gram unit: %lf", g);
    printf("\nResult in pound unit: %lf", lb);
}
void pound(double x)
{
    double mg, kg, g;
    kg = x / 2.205;
    g = x * 453.6;
    mg = x * 453600.0;

    printf("\nResult in kilogram unit: %lf", kg);
    printf("\nResult in gram unit: %lf", g);
    printf("\nResult in miligram unit: %lf", mg);
}
void massCalculation()
{

    int choice;
    while(1){

    printf("\t\t------------------------------------------------\n");
    printf("\t\t|\tMass Converter Menu\t\t|\n");
    printf("\t\t------------------------------------------------\n");
    printf("\t\t1. Kilogram\n\t\t2. Gram\n\t\t3. Miligram\n\t\t4. Pound\n\t\t5. Exit to main menu\n");
    printf("\t\t------------------------------------------------\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        double a;
        printf("Enter the value in Kilogram (KG): ");
        scanf("%lf", &a);
        kilogram(a);
        printf("\n");
        break;
    }
    case 2:
    {
        double a;
        printf("Enter the value in gram (G): ");
        scanf("%lf", &a);
        gram(a);
        printf("\n");
        break;
    }
    case 3:
    {
        double a;

        printf("Enter the value in miligram (mg): ");
        scanf("%lf", &a);
        miligram(a);
        printf("\n");
        break;
    }
    case 4:
    {
        double a;
        printf("Enter the value in pound (lb): ");
        scanf("%lf", &a);
        pound(a);
        printf("\n");
        break;
    }
    case 5:
    {
        printf("\n");
        return;
        break;
    }
    default:
    {
        printf("Invalid choice! Please, choose (1/2/3/4)");
        printf("\n");
        break;
    }
    }


    }


}

#endif // MASSCONVERTE_H_INCLUDED
