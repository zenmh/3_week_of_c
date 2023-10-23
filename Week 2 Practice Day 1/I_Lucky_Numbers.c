#include <stdio.h>

int main()
{
      int n, f, l;
      scanf("%d", &n);

      f = n / 10;
      l = n % 10;

      if (l % f == 0 || f % l == 0)
            printf("YES");
      else
            printf("NO");

      return 0;
}