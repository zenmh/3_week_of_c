#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
      int i, n;
      scanf("%d", &n);

      int a[n];

      for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

      for (i = n - 1; i >= 0; i--)
            if (i % 2)
                  printf("%d ", a[i]);

      return 0;
}