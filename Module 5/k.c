#include <stdio.h>

int main()
{
      int a, b, c, min, max;
      scanf("%d %d %d", &a, &b, &c);

      min = a <= b ? (a <= c ? a : c) : (b <= c ? b : c);
      max = a >= b ? (a >= c ? a : c) : (b >= c ? b : c);

      printf("%d %d", min, max);

      return 0;
}