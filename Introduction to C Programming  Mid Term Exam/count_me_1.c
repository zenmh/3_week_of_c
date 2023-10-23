#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
      int i, n, two = 0, three = 0;
      scanf("%d", &n);

      int a[n];
      for (i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);
            if (a[i] % 2 == 0)
                  two++;
            else if (a[i] % 3 == 0)
                  three++;
      }

      printf("%d %d", two, three);

      return 0;
}