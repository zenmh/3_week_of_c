#include <stdio.h>

int main()
{
      int i, n;
      scanf("%d", &n);

      int a[n];

      for (i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);

            if (a[i] == 0)
                  a[i] = 0;
            else if (a[i] > 0)
                  a[i] = 1;
            else
                  a[i] = 2;
      }

      for (i = 0; i < n; i++)
            printf("%d ", a[i]);

      return 0;
}