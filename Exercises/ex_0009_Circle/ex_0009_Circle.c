// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0009_Circle.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Function definitions
void ex_0009_Circle(void)
{
  // TODO: read the radius with scanf, then print pi and the circle surface
double radius;
  printf("Circle radius: ");
  scanf("%lf", &radius);

  double surface = M_PI * radius * radius;

  printf("pi = %.6lf", M_PI);
  printf("\nCircle surface = %.2lf\n", surface);
}
