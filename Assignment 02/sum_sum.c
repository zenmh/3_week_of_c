#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
      int i, n, pos_sum = 0, neg_sum = 0;
      scanf("%d", &n);

      int a[n];

      for (i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);
            if (a[i] >= 0)
                  pos_sum += a[i];
            else
                  neg_sum += a[i];
      }

      printf("%d %d", pos_sum, neg_sum);
      return 0;
}