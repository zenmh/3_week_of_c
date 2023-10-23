#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
      int r;
      scanf("%d", &r);
      for (int i = 0; i < r; i++)
      {
            int i, n, x, ans = 0;
            scanf("%d", &n);
            long long a[n];
            for (i = 0; i < n; i++)
                  scanf("%lld", &a[i]);

            scanf("%d", &x);
            for (i = 0; i < n; i++)
                  if (a[i] == x)
                        ans = 1;

            if (ans == 1)
                  printf("YES\n");
            else
                  printf("NO\n");
      }

      return 0;
}
