// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0020_Calculator.h"

// Function definitions
// TODO: implement ex_0020_Calculator
double ex_0020_Calculator(double op1, double op2, char op);

double ex_0020_Calculator(double op1, double op2, char op)
{
    switch(op){
        case '+':
            return op1 + op2;
        break;
        case '-':
            return op1 - op2;
        break;
        case '*':
            return op1 * op2;
        break;
        case '/':
            if(op2 == 0)
            {
                return 0;
            }
            else
            {
                return op1 / op2;
            }
        break;
        default:
            return 0;
        break;
    } 
}