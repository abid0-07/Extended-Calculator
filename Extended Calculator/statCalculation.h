#ifndef STATCALCULATION_H_INCLUDED
#define STATCALCULATION_H_INCLUDED

// Test case: 9 10 12 13 13 13 15 15 16 16 18 22 23 24 24 25 (Total 16)
// Mean: 16.75
// Median: 15.00
// mode: 13.00

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void mean()
{
    float mean;
    float sum;
    int i, n;
    float a[100];
    printf("\nEnter the limit\n");
    scanf("%d", &n);
    printf("Enter the set of numbers\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    sum = 0.0;

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    mean = (sum / n);
    printf("Mean = %.4f", mean);
}
void swap(float *p, float *q)
{
    int t;

    t = *p;
    *p = *q;
    *q = t;
}
void sort(float a[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
        }
    }
}

void median()
{
    int i, n;
    float a[100];
    printf("\nEnter the limit\n");
    scanf("%d", &n);
    printf("Enter the set of numbers\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }

    sort(a, n);

    n = (n + 1) / 2 - 1; // -1 as array indexing in C starts from 0

    printf("Median = %.4f", a[n]);
}

void mode()
{

    int i, j, sum = 0, n, t, k = 0, c = 1, max = 0, mode;
    float a[50] = {0.0}, b[50] = {0.0};
    float x = 0.0, y = 0.0;
    printf("\nEnter the limit\n");
    scanf("%d", &n);
    printf("Enter the set of numbers\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        mode = 0;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                mode++;
            }
        }
        if ((mode > max) && (mode != 0))
        {
            k = 0;
            max = mode;
            b[k] = a[i];
            k++;
        }
        else if (mode == max)
        {
            b[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            c++;
    }
    if (c == n)
        printf("\nThere is no mode");
    else
    {
        printf("\nMode\t= ");
        for (i = 0; i < k; i++)
            printf("%.4f ", b[i]);
    }
    printf("\n");
}

int statCalculation()
{

    int choice;
    while (1)
    {
        printf("\t\t------------------------------------------------\n");
        printf("\t\t\tStatistic Calculation\n");
        printf("\t\t------------------------------------------------\n");
        printf("\t\t1. Mean calculation\n\t\t2. Median calculation\n\t\t3. Mode calculation\n\t\t4. Exit Programme to main menu\n");
        printf("\t\t------------------------------------------------\n");

        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            mean();
            printf("\n");
            break;
        }
        case 2:
        {
            median();
            printf("\n");
            break;
        }
        case 3:
        {
            mode();
            printf("\n");
            break;
        }
        case 4:
        {
            return 1;
            printf("\n");
            break;
        }

        default:
        {
            printf("Invalid Choice\n");
            break;
        }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}

#endif // STATCALCULATION_H_INCLUDED
