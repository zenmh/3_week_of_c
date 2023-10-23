#include <stdio.h>

int main()
{
      int i, n, min = 1001;
      scanf("%d", &n);

      int a[n];

      for (i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);
            if (a[i] <= min)
                  min = a[i];
      }

      for (i = 0; i < n; i++)
            if (min == a[i])
            {
                  printf("%d %d", min, i + 1);
                  break;
            }

      return 0;
}