#ifndef MATRIXCALCULATOR_H_INCLUDED
#define MATRIXCALCULATOR_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
// User Defined Function Declaration
void readMatrix(int array[10][10], int rows, int columns);
void printMatrix(int array[10][10], int rows, int columns);
void matrixAddSub(int matrixA[10][10], int matrixB[10][10], int rows, int columns, int mul);
void matrixScalarMultiply(int array[10][10], int scalar, int rows, int columns);
void matrixMultiply(int matrixA[10][10], int matrixB[10][10], int rowsA, int columnsA, int columnsB);
int matrixCalculator()
{

    int i, j, k; // used in for loops

    int matrixA[10][10]; // initialized at 10 just to have it initialized
    int matrixB[10][10];
    int rowA, colA;
    int rowB, colB;
    int operation; // used in switch statements
    char again = 'Y';
    int scalar = 0;
    int add = 1;
    int sub = -1;

    while (again == 'Y' || again == 'y')
    {
        printf("\t\t------------------------------------------------\n");
        printf("\t\t\tMatrix Calculator\n");
        printf("\t\t------------------------------------------------\n");
        printf("\t\t1. Add two matrixes\n");
        printf("\t\t2. Subtract two matrixes\n");
        printf("\t\t3. Scalar Multiply to a matrix\n");
        printf("\t\t4. Multiply two matrices\n");
        printf("\t\t5. Return to main menu\n");
        printf("\t\t------------------------------------------------\n");
        printf("Enter your choice: ");
        scanf(" %d", &operation);

        switch (operation)
        {

        case 1:
        {

                printf("\nMatrices must be the same size\n");
                printf("\nEnter the #rows and #cols for matrix A: ");
                scanf("%d%d", &rowA, &colA);

                printf("Enter the #rows and #cols for matrix B: ");
                scanf("%d%d", &rowB, &colB);
            if(rowA == rowB && colA== colB)
            {

            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", rowA, colA); // with the %d we remember the user the dimensions of the array
            readMatrix(matrixA, rowA, colA);
            printf("\n\t\tMatrix A\n\n");
            printMatrix(matrixA, rowA, colA);

            printf("\n\tEnter elements of Matrix B a %d x %d matrix.\n", rowB, colB); // with the %d we remember the user the dimensions of the array
            readMatrix(matrixB, rowB, colB);
            printf("\n\t\tMatrix B\n\n");
            printMatrix(matrixB, rowB, colB);

                printf("\nThe Sum of matrixA + matrixB is : \n");
            matrixAddSub(matrixA, matrixB, rowA, colA, add);
            }
            else{
                printf("Dimension of the matrices is not equal. So, addition not possible!");

            }

            break;
        }

        case 2:

        {
            printf("\nEnter the #rows and #cols for matrix A: ");
            scanf("%d%d", &rowA, &colA);

            printf("Enter the #rows and #cols for matrix B: ");
            scanf("%d%d", &rowB, &colB);


            if(rowA == rowB && colA== colB){

            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", rowA, colA); // with the %d we remember the user the dimensions of the array
            readMatrix(matrixA, rowA, colA);
            printf("\n\t\tMatrix A\n\n");
            printMatrix(matrixA, rowA, colA);

            printf("\n\tEnter elements of Matrix B a %d x %d matrix.\n", rowB, colB); // with the %d we remember the user the dimensions of the array
            readMatrix(matrixB, rowB, colB);
            printf("\n\t\tMatrix B\n\n");
            printMatrix(matrixB, rowB, colB);

            printf("\nThe difference between matrixA - matrixB is : \n");
            matrixAddSub(matrixA, matrixB, rowA, colA, sub);
        }
        else
        {
            printf("Dimension of the matrices is not equal. So, addition not possible!");
        }
            break;
        }

        case 3:

        {
            printf("\nEnter the scalar: ");
            scanf("%d", &scalar);
            printf("\nThe scalar is: %d ", scalar);

            printf("\nEnter the #rows and #cols for matrix A: ");
            scanf("%d%d", &rowA, &colA);

            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", rowA, colA); // with the %d we remember the user the dimensions of the array
            readMatrix(matrixA, rowA, colA);
            printf("\n\t\tMatrix A\n\n");
            printMatrix(matrixA, rowA, colA);

            printf("\nThe scalar multiplication between matrixA * %d is: \n", scalar);
            matrixScalarMultiply(matrixA, scalar, rowA, colA);

            break;
        }

        case 4:
        { // when multiplying arrays matrixA column # has to equal matrixB row #
            printf("\nEnter the #rows and #cols for matrix A: ");
            scanf("%d%d", &rowA, &colA);

            printf("Enter the #rows and #cols for matrix B: ");
            scanf("%d%d", &rowB, &colB);

            // Column of first matrix should be equal to column of second matrix and
            while (colA != rowB)
            {
                printf("\n\nError! column of first matrix not equal to row of second.\n\n");
                printf("\nEnter the #rows and #cols for matrix A: ");
                scanf("%d%d", &rowA, &colA);

                printf("Enter the #rows and #cols for matrix B: ");
                scanf("%d%d", &rowB, &colB);
            }

            // Storing elements of first matrix.
            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", rowA, colA); // with the %d we remember the user the dimensions of the array
            readMatrix(matrixA, rowA, colA);
            printf("\n\t\tMatrix A\n\n");
            printMatrix(matrixA, rowA, colA);

            // Storing elements of second matrix.
            printf("\n\tEnter elements of Matrix B a %d x %d matrix.\n", rowB, colB); // with the %d we remember the user the dimensions of the array
            readMatrix(matrixB, rowB, colB);
            printf("\n\t\tMatrix A\n\n");
            printMatrix(matrixB, rowB, colB);

            // multiplying arrays
            matrixMultiply(matrixA, matrixB, rowA, colA, colB);

            break;
        }
        case 5:
        {
            printf("Returning Main menu...\n");
            return;
        }
        default:
            printf("\nIncorrect option! Please choose a number 1-4.");
            break;
        }

        printf("\n\nDo you want to calculate again? Y/N\n");
        scanf(" %c", &again);
    }
}

// User Defined Function Definition
void readMatrix(int array[10][10], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        printf("\t%d entries for row %d: ", columns, i + 1);
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    return;
}

void printMatrix(int array[10][10], int rows, int columns)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("\t%d", array[i][j]);
        }
        printf("\n");
    }
}

void matrixAddSub(int matrixA[10][10], int matrixB[10][10], int rows, int columns, int mul)
{
    int i, j;
    int sumM[10][10];
    int scaM[10][10];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scaM[i][j] = mul * matrixB[i][j];
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            sumM[i][j] = matrixA[i][j] + scaM[i][j];
            printf("\t%d", sumM[i][j]);
        }
        printf("\n");
    }
}

void matrixScalarMultiply(int array[10][10], int scalar, int rows, int columns)
{
    int i, j;
    int scaM[10][10];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scaM[i][j] = scalar * array[i][j];
            printf("%d\t", scaM[i][j]);
        }
        printf("\n");
    }
}

void matrixMultiply(int matrixA[10][10], int matrixB[10][10], int rowsA, int columnsA, int columnsB)
{
    int i, j, k;
    int mulM[10][10];

    // Initializing all elements of result matrix to 0
    for (i = 0; i < rowsA; ++i)
        for (j = 0; j < columnsB; ++j)
        {
            mulM[i][j] = 0;
        }

    // Multiplying matrices a and b and
    // storing result in result matrix
    for (i = 0; i < rowsA; ++i)
        for (j = 0; j < columnsB; ++j)
            for (k = 0; k < columnsA; ++k)
            {
                mulM[i][j] += matrixA[i][k] * matrixB[k][j];
            }
    printf("\nOutput Matrix:\n");
    for (i = 0; i < rowsA; ++i)
        for (j = 0; j < columnsB; ++j)
        {
            printf("\t%d ", mulM[i][j]);
            if (j == columnsB - 1)
                printf("\n\n");
        }
}

#endif // MATRIXCALCULATOR_H_INCLUDED
