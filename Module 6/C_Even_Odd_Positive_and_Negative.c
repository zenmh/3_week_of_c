#include <stdio.h>

int main()
{
      int i, lenght, num, even = 0, odd = 0, pos = 0, neg = 0;
      scanf("%d", &lenght);

      for (i = 1; i <= lenght; i++)
      {
            scanf("%d", &num);

            if (num % 2 == 0)
                  even++;
            else
                  odd++;

            if (num > 0)
                  pos++;
            else if (num < 0)
                  neg++;
      }

      printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);

      return 0;
}