#ifndef TEMPERATURECONVERTER_H_INCLUDED
#define TEMPERATURECONVERTER_H_INCLUDED

#include <stdio.h>

void menuTemperature()
{
    printf("\n\t\t------------------------------------------------\n");
    printf("\t|\tTemparature Converter Menu |\n");
    printf("\t\t------------------------------------------------\n");
    printf("\t\t1. Kelvin Scale to others\n\t\t2. Celcius Scale to others\n\t\t3. Farenheit Scale to others\n\t\t4. Return to unit menu\n");
    printf("\t\t------------------------------------------------\n");
}
void kelvinScale(float x)
{
    float temp1, temp2;
    temp1 = x - 273.0;
    temp2 = (9.0 / 5) * (x - 273.0) + 32.0;
    printf("Temperature in Celcius Scale: %.4f\n", temp1);
    printf("Temperature in Farenheit Scale: %.4f\n", temp2);
}
void farenheitScale(float x)
{
    float temp1, temp2;
    temp1 = (5.0 / 9) * x - 32.0;
    temp2 = (5.0 / 9) * (x - 32.0) + 273.0;
    printf("Temperature in Celcius Scale: %.4f\n", temp1);
    printf("Temperature in Kelvin Scale: %.4f\n", temp2);
}
void celciusScale(float x)
{
    float temp1, temp2;
    temp1 = x + 273.0;
    temp2 = (9.0 / 5) * x + 32.0;
    printf("Temperature in Farenheit Scale: %.4f\n", temp2);
    printf("Temperature in Kelvin Scale: %.4f\n", temp1);
}

void temperature()
{
    menuTemperature();
    int choice1;
    printf("Select your choice of Scale: ");
    scanf("%d", &choice1);
    switch (choice1)
    {
    case 1:
    {
        float a;
        printf("Enter value in kelvin scale: ");
        scanf("%f", &a);
        kelvinScale(a);
        printf("\n");
        break;
    }
    case 2:
    {
        float a;
        printf("Enter value in kelvin scale: ");
        scanf("%f", &a);
        celciusScale(a);
        printf("\n");
        break;
    }
    case 3:
    {
        float a;
        printf("Enter value in kelvin scale: ");
        scanf("%f", &a);
        farenheitScale(a);
        printf("\n");
        break;
    }
    case 4:
        {
            return;
        }
    default:
    {
        printf("Invalid choice");
        break;
    }
    }
}

#endif // TEMPERATURECONVERTER_H_INCLUDED
