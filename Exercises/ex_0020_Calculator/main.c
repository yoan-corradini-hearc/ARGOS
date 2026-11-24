// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0020_Calculator.h"

int main(void)
{
  ex_0020_Calculator(1, 2, '+');
  ex_0020_Calculator(1, 2, '-');
  ex_0020_Calculator(1.1, 9.9, '*');
  ex_0020_Calculator(1, 2, '/');
  ex_0020_Calculator(1, 0, '/');
  ex_0020_Calculator(1, 2, 'z');
  return 0;
}