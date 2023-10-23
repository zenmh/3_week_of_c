#include <stdio.h>

int main()
{
      int i, j, n1;
      scanf("%d", &n1);

      int a1[n1];
      for (i = 0; i < n1; i++)
            scanf("%d", &a1[i]);

      int n2;
      scanf("%d", &n2);

      int a2[n2];
      for (i = 0; i < n2; i++)
            scanf("%d", &a2[i]);

      int ans[n1 + n2];
      for (i = 0; i < n1; i++)
            ans[i] = a1[i];

      i = n1;
      for (j = 0; j < n2; j++)
      {
            ans[i] = a2[j];
            i++;
      }

      for (i = 0; i < n1 + n2; i++)
            printf("%d ", ans[i]);

      return 0;
}