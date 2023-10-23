#include <stdio.h>

int main()
{
      int i, n, pos, val;
      scanf("%d", &n); // 5

      int a[n + 1];
      for (i = 0; i < n; i++)
            scanf("%d", &a[i]); // 10 20 30 40 50

      scanf("%d %d", &pos, &val); // 2 100
      for (i = n; i >= pos + 1; i--)
            a[i] = a[i - 1];

      a[pos] = val;

      for (i = 0; i <= n; i++)
            printf("%d ", a[i]); // 10 20 100 30 40 50

      return 0;
}