#include <stdio.h>

int main()
{
      int x;
      scanf("%d", &x);

      while (x >= 10)
            x /= 10;

      if (x % 2)
            printf("ODD");
      else
            printf("EVEN");

      return 0;
}