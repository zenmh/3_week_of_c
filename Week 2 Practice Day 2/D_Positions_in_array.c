#include <stdio.h>

int main()
{
      int i, n;
      scanf("%d", &n);

      int a[n];

      for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

      for (i = 0; i < n; i++)
            if (a[i] <= 10)
                  printf("A[%d] = %d\n", i, a[i]);

      return 0;
}