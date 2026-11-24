// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0019_MultiplicationTable.h"

int main(void)
{
  int max = 12;
  int min = 1;

  int table = ex_0019_Read(min, max);
  ex_0019_MultiplicationTable(table);

  return 0;
}
