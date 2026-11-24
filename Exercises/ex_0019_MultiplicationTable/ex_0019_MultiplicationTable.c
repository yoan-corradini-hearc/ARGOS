// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0019_MultiplicationTable.h"

// Function definitions
// TODO: implement ex_0019_Read and ex_0019_MultiplicationTable
int ex_0019_Read(int min, int max);
void ex_0019_MultiplicationTable(int table);

void ex_0019_MultiplicationTable(int table)
{
    printf("\nMULTIPLICATION TABLE FOR %d", table);
    for(int i = 1; i < 11; ++i){
        printf("\n%d X %d = %d", table, i, table*i);
    }
    printf("\n");
}

int ex_0019_Read(int min, int max)
{
    int choice = 0;
    int valid = 0;

    do
    {
        printf("Please enter the multiplication table (in [%d..%d]): ", min, max);
        valid = scanf("%d", &choice);

        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    } while (valid !=1 || choice < min || choice > max);
    return choice;
}