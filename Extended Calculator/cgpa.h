#ifndef CGPA_H_INCLUDED
#define CGPA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct s
{
    char subName[20];
    float credit;
    float gpa;
};
int record, count, n;
double totalcredit = 0;

void printfun(struct s *s1, double cgpa)
{
    printf("Printing to the console\n");
    printf("Subject Name\tCredit\tGPA\n");
    printf("------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t", s1[i].subName);
        printf("%.2f\t", s1[i].credit);
        printf("%.2f\n", s1[i].gpa);
    }
    printf("------------------------------\n");
    printf("Total credit = %f\n", totalcredit);
    printf("Total GPA = %f\n", cgpa);
}
double totalgpa(struct s *s1)
{
    float gpa = 0;
    float cgpa = 0;
    printf("\nCalcuating CGPA");
    for (int i = 0; i < n; i++)
    {
        totalcredit += s1[i].credit;
        gpa = gpa + ((s1[i].credit) * (s1[i].gpa));
    }
    cgpa = gpa / totalcredit;
    return cgpa;
}

int cgpa()
{
    printf("\n\t\t------------------------------------------------\n");
    printf("\t\t\t\tCGPA Calculator\n");
    printf("\t\t------------------------------------------------\n");

    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    struct s s1[n];
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Enter the name of the subject: ");
        gets(s1[i].subName);
        fflush(stdin);
        printf("\nEnter the credit of the credit: ");
        scanf("%f", &s1[i].credit);
        fflush(stdin);
        printf("Enter the gpa of the GPA: ");
        scanf("%f", &s1[i].gpa);
        fflush(stdin);
    }
    double cgpa = totalgpa(s1);
    printfun(s1, cgpa);

    int choice;
    printf("Printing into file:\n ");

    FILE *f = fopen("cgpa.txt", "a+");
    fputs("\n", f);
    fputs("Subject Name\tCredit\tGPA\n", f);
    for (int i = 0; i < n; i++)
    {
        fputs(s1[i].subName, f);
        fputs("\t\t", f);
        fprintf(f, "%.2f\t", s1[i].credit);
        fprintf(f, "%.2f\n", s1[i].gpa);
        printf("data NO %d  printed into file\n", i + 1);
    }
    fprintf(f, "Total GPA: %.2f\n", cgpa);

    fclose(f);
    return 1;
}

#endif // CGPA_H_INCLUDED
