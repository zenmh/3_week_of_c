#include <stdio.h>

int main()
{
      int n;
      scanf("%d", &n);

      n /= 1000;

      if (n % 2)
            printf("ODD");
      else
            printf("EVEN");

      return 0;
}