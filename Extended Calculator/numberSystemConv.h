#ifndef NUMBERSYSTEMCONV_H_INCLUDED
#define NUMBERSYSTEMCONV_H_INCLUDED

/*
Test Case:
Decimal: 478,4077
Octal: 736,7755
Hexadecimal: 1DE,fed
Binary: 111011110,111111101101

*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void numberMenu()
{
    printf("\t\t------------------------------------------------\n");
    printf("\t\t\tNumber System Conversion\n");
    printf("\t\t------------------------------------------------\n");
    printf("\t\t1. Decimal Number to others\n\t\t2. Binary Number to others\n\t\t3. Octal Number to others\n\t\t4. Hexadecimal Number to others\n\t\t5. Return to main menu\n");
    printf("\t\t------------------------------------------------\n");
}
void decimalToBinary(long int number)
{
    long int binary[50] = {0};

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
}

void decimalToOctal(long int number)
{
    long int octal[50] = {0};
    int i = 0, length = 0;
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
}

void decimalToHexadecimal(long int number)
{
    long int hexadecimal[50] = {0};
    int i = 0, length = 0;
    while (number > 0)
    {
        hexadecimal[i] = number % 16;
        number = number / 16;
        i++;
        length++;
    }
    printf("\nConverted hexadecimal number: ");
    for (int i = length - 1; i >= 0; i--)
    {
        switch (hexadecimal[i])
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
            printf("%ld", hexadecimal[i]);
        }
    }
}

long int binaryToDecimal(long int number)
{
    long int decimal, sum = 0, power = 0;
    long int i = 1, remainder;
    while (number > 0)
    {
        decimal = number % 10;
        sum = sum + decimal * pow(2, power);
        number = number / 10;
        power++;
    }
    // printf("\nConverted Decimal Number: %ld", decimal);
    return sum;
}
void binaryConverter(long int number)
{
    long int decimal = binaryToDecimal(number);
    printf("\nConverted Decimal Number: %ld", decimal);
    decimalToHexadecimal(decimal);
    decimalToOctal(decimal);
}

void hexadecimalNumberConverter(char hexadecimal[])
{

    int i = 0;
    long long octal, bin, place;
    int rem, val;
    octal = 0ll;
    bin = 0ll;
    place = 0ll;
    // Hexadecimal to binary
    for (int i = 0; hexadecimal[i] != '\0'; i++)
    {
        bin = bin * place;

        switch (hexadecimal[i])
        {
        case '0':
            bin += 0;
            break;
        case '1':
            bin += 1;
            break;
        case '2':
            bin += 10;
            break;
        case '3':
            bin += 11;
            break;
        case '4':
            bin += 100;
            break;
        case '5':
            bin += 101;
            break;
        case '6':
            bin += 110;
            break;
        case '7':
            bin += 111;
            break;
        case '8':
            bin += 1000;
            break;
        case '9':
            bin += 1001;
            break;
        case 'a':
        case 'A':
            bin += 1010;
            break;
        case 'b':
        case 'B':
            bin += 1011;
            break;
        case 'c':
        case 'C':
            bin += 1100;
            break;
        case 'd':
        case 'D':
            bin += 1101;
            break;
        case 'e':
        case 'E':
            bin += 1110;
            break;
        case 'f':
        case 'F':
            bin += 1111;
            break;
        default:
            printf("Invalid hexadecimal input.");
        }
        place = 10000;
    }
    printf("\nBinary number = %lld", bin);
    place = 1;

    /* Binary to octal conversion */
    while (bin > 0)
    {
        rem = bin % 1000;

        switch (rem)
        {
        case 0:
            val = 0;
            break;
        case 1:
            val = 1;
            break;
        case 10:
            val = 2;
            break;
        case 11:
            val = 3;
            break;
        case 100:
            val = 4;
            break;
        case 101:
            val = 5;
            break;
        case 110:
            val = 6;
            break;
        case 111:
            val = 7;
            break;
        }
        octal = (val * place) + octal;
        bin /= 1000;
        place *= 10;
    }
    printf("\nOctal number = %lld", octal);

    long long decimal = 0, base = 1;
    int value, length;

    length = strlen(hexadecimal);
    for (int i = length - 1; i >= 0; i--)
    {
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9')
        {
            decimal += (hexadecimal[i] - 48) * base;
            base *= 16;
        }
        else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F')
        {
            decimal += (hexadecimal[i] - 55) * base;
            base *= 16;
        }
        else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f')
        {
            decimal += (hexadecimal[i] - 87) * base;
            base *= 16;
        }
    }

    printf("\nDecimal = %lld\n", decimal);
}

void octalNumber(long int octal)
{
    long int decimal = 0;
    int i = 0;
    while (octal != 0)
    {
        decimal += (octal % 10) * pow(8, i);
        ++i;
        octal /= 10;
    }
    i = 1;
    printf("\nConverted Decimal number:  %ld\n", decimal);
    decimalToBinary(decimal);
    decimalToHexadecimal(decimal);
}

// main function in this file
int numberSystemConverter()
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
            decimalToBinary(number);
            decimalToHexadecimal(number);
            decimalToOctal(number);
            printf("\n");
            break;
        }
        case 2:
        {
            long int number;
            printf("Enter number in binary format: ");
            scanf("%ld", &number);
            binaryConverter(number);
            printf("\n");
            break;
        }
        case 3:
        {
            long int octal;
            printf("Enter octal number: ");
            scanf("%ld", &octal);
            octalNumber(octal);
            printf("\n");
            break;
        }
        case 4:
        {
            char hexadecimal[50];
            printf("Enter hexadecimal number: ");
            scanf("%s", hexadecimal);
            hexadecimalNumberConverter(hexadecimal);
            printf("\n");
            break;
        }
        case 5:
        {
            printf("Returning to main menu");
            return 1;
        }
        default:
        {
            printf("Invalid Choice!!");
            break;
        }
        }
    }
}

#endif // NUMBERSYSTEMCONV_H_INCLUDED
