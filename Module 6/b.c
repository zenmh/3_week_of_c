#include <stdio.h>

int main()
{
      int i, n;
      scanf("%d", &n);

      if (n == 1)
            printf("%d\n", -1);
      else
            for (i = 2; i <= n; i += 2)
                  printf("%d\n", i);

      return 0;
}