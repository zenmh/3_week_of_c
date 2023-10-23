#include <stdio.h>

int main()
{

      int a, b, c, min, max;
      scanf("%d %d %d", &a, &b, &c);

      // if (a < b && a < c)
      //       printf("%d ", a);

      // if (b < a && b < c)
      //       printf("%d ", b);

      // if (c < a && c < b)
      //       printf("%d ", c);

      // if (a > b && a > c)
      //       printf("%d ", a);

      // if (b > a && b > c)
      //       printf("%d ", b);

      // if (c > a && c > b)
      //       printf("%d ", c);

      min = a < b ? (a < c ? a : c) : (b < c ? b : c);
      max = a > b ? (a > c ? a : c) : (b > c ? b : c);

      printf("%d %d", min, max);

      return 0;
}