#include <stdio.h>

int main()
{
      int i, n, x;
      scanf("%d", &n);

      int a[n];

      for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

      scanf("%d", &x);

      for (i = 0; i < n; i++)
      {
            if (a[i] == x)
            {
                  printf("%d", i);
                  break;
            }
            else if (i == n - 1)
                  printf("%d", -1);
      }

      return 0;
}