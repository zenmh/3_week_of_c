#include <stdio.h>
#include <limits.h>

int main()
{
      int i, n, min = INT_MAX, max = INT_MIN, min_i = 0, max_i = 0;
      scanf("%d", &n);

      int a[n];
      for (i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);
            if (a[i] <= min)
            {
                  min = a[i];
                  min_i = i;
            }
            if (a[i] >= max)
            {
                  max = a[i];
                  max_i = i;
            }
      }

      a[max_i] = min;
      a[min_i] = max;

      for (i = 0; i < n; i++)
            printf("%d ", a[i]);

      return 0;
}