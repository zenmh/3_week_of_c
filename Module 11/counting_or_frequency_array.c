#include <stdio.h>

int main()
{
      int i, n;
      scanf("%d", &n);
      int a[n];
      for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

      int count[7] = {0};
      for (i = 0; i < n; i++)
            count[a[i]]++;

      for (i = 0; i <= 6; i++)
            printf("%d is %d times here\n", i, count[i]);

      return 0;
}