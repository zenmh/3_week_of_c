#include <stdio.h>

int main()
{
      int i, length, num, max = 0;
      scanf("%d", &length);

      for (i = 1; i <= length; i++)
      {
            scanf("%d", &num);

            if (num > max)
                  max = num;
      }

      printf("%d", max);

      return 0;
}