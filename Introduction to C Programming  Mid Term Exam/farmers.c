#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
      int i, n;
      scanf("%d", &n);
      for (i = 0; i < n; i++)
      {
            int m1, m2, d1;
            scanf("%d %d %d", &m1, &m2, &d1);
            int d2 = (d1 * m1) / (m1 + m2);
            int def = d1 - d2;
            printf("%d\n", def);
      }

      return 0;
}