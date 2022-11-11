#ifndef NUMBERSYSTEMCONV_H_INCLUDED
#define NUMBERSYSTEMCONV_H_INCLUDED

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void numberMenu()
{
    printf("\t\t------------------------------------------------\n");
    printf("\t\t\tNumber System Conversion\n");
    printf("\t\t------------------------------------------------\n");
    printf("\t\t1. Decimal Number to others\n\t\t2. Binary Number to others\n\t\t3. Octal Number to others\n\t\t4. Hexadecimal Number to others\n");
    printf("\t\t------------------------------------------------\n");
}
void decimalNumber(long int number)
{
    long int binary[50] = {0};
    long int hexa[50] = {0};
    long int octal[50] = {0};
    int i = 0, length = 0;
    long int number1 = number;
    // Binary Conversion
    while (number > 0)
    {
        binary[i] = number % 2;
        number /= 2;
        i++;
        length++;
    }
    printf("\nConverted binary number: ");
    for (int i = length - 1; i >= 0; i--)
        printf("%ld", binary[i]);

    number = number1;
    i = 0, length = 0;
    while (number > 0)
    {
        octal[i] = number % 8;
        number = number / 8;
        i++;
        length++;
    }
    printf("\nConverted octal number: ");
    for (int i = length - 1; i >= 0; i--)
        printf("%ld", octal[i]);

    number = number1;
    i = 0, length = 0;
    while (number > 0)
    {
        hexa[i] = number % 16;
        number = number / 16;
        i ++ ;
        length++;
    }
    for (int i = length - 1; i >= 0; i--)
    {
        switch (hexa[i])
        {
        case 10:
        {
            printf("A");
            break;
        }
        case 11:
        {
            printf("B");
            break;
        }
        case 12:
        {
            printf("C");
            break;
        }
        case 13:
        {
            printf("D");
            break;
        }
        case 14:
        {
            printf("E");
            break;
        }
        case 15:
        {
            printf("F");
            break;
        }
        default:
            printf("%ld", hexa[i]);
        }
    }
}
void binaryNumber(long int number)
{
    long int decimal, sum = 0, power = 0;
    long int i = 1, remainder;
    long int hexa = 0;
    long int octal[50] = {0};
    long int number1 = number;

    while (number > 0)
    {
        decimal = number % 10;
        number = number / 10;
        sum = sum + decimal * pow(2, power);
        power++;
    }
    printf("\nConverted Decimal Number: %ld", decimal);
    number = number1;
    while (number > 0)
    {
        remainder = number % 10;
        hexa = hexa + remainder * i;
        i = i * 2;
        number = number / 10;
    }
    printf("\nConverted Hexadecimal number: %lX", hexa);
}
void hexadecimalNumber() {}
void octalNumber() {}

// main function in this file
void numberSystem()
{
    int choice;
    while (1)
    {
        numberMenu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            long int number;
            printf("Enter number in decimal format: ");
            scanf("%ld", &number);
            decimalNumber(number);
            break;
        }
        case 2:
        {
        }

        default:
            break;
        }
    }
}

#endif // NUMBERSYSTEMCONV_H_INCLUDED
