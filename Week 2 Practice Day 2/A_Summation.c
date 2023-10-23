#include <stdio.h>

int main()
{
      long long n, i, sum = 0;
      scanf("%lld", &n);

      long long a[n];

      for (i = 0; i < n; i++)
            scanf("%lld", &a[i]);

      for (i = 0; i < n; i++)
            sum += a[i];

      printf("%lld", sum <= 0 ? -sum : sum);

      return 0;
}