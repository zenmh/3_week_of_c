#include <stdio.h>

int main()
{
      int i, l, n;
      scanf("%d", &l);
      for (i = 1; i <= l; i++)
      {
            scanf("%d", &n);
            do
            {
                  printf("%d ", n % 10);
                  n /= 10;
            } while (n != 0);
            printf("\n");
      }
      return 0;
}