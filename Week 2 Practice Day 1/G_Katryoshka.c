#include <stdio.h>

int main()
{
      long long m, n, k, kat = 0, min = 0;
      scanf("%lld %lld %lld", &m, &n, &k);

      if (m <= n && m <= k)
            min = m;
      else if (n <= m && n <= k)
            min = n;
      else
            min = k;

      kat = min;
      m -= min;
      n -= min;
      k -= min;

      m /= 2;

      if (m <= k)
            min = m;

      else if (k <= m)
            min = k;

      kat += min;

      printf("%lld\n", kat);

      return 0;
}

/* Time limit problem
 long long m, n, k, kat = 0, lr = 0;
      scanf("%lld %lld %lld", &m, &n, &k);
      if (m >= lr)
            lr = m;
      if (n >= lr)
            lr = n;
      if (k >= lr)
            lr = k;
      for (int i = 0; i <= lr; i++)
      {
            if (m > 0 && n > 0 && k > 0)
            {
                  m--;
                  n--;
                  k--;
                  kat++;
            }
            else if (m >= 2 && k >= 1)
            {
                  m -= 2;
                  k--;
                  kat++;
            }
            if (m == 0 || k == 0)
                  break;
      }
      printf("%lld", kat);
      return 0;
 */