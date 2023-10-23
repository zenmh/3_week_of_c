#include <stdio.h>

int main()
{
      int a = 1000000000;
      long long int b = 1000000000000000;
      printf("%d\n%lld", a, b);

      float x = 3.000000;
      double y = 2000.000000000;
      printf("\n%f\n%0.14lf", x, y);
      return 0;
}