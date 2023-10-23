#include <stdio.h>

int main()
{
      int n, i, sum = 0;
      scanf("%d", &n);

      int ar[n];
      for (i = 0; i < n; i++)
            scanf("%d", &ar[i]);

      for (i = 0; i < n; i++)
            sum += ar[i];

      // printf("%d\n", ar[6]);

      printf("%d", sum);

      return 0;
}