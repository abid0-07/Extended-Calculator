#ifndef ALLHEADERFILE_H_INCLUDED
#define ALLHEADERFILE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printdash()
{
    printf("\t\t------------------------------------------------\n");
}

void mainMenu()
{
    printdash();
    printf("\t\t\t\tMain Menu\n");
    printdash();
    printf("\t\t1. Basic Calculator\n\t\t2. Unit Converter\n\t\t3. CGPA Calculator\n\t\t4. Electricity Converter\n\t\t5. Equation Calculator\n\t\t6. Statistical Calculator\n");
    printdash();
}

#endif // ALLHEADERFILE_H_INCLUDED
