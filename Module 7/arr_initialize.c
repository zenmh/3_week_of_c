#include <stdio.h>

int main()
{
      int ar[5] = {32, 57, 87, 54, 4};

      for (int i = 0; i < 5; i++)
            printf("%d\n", ar[i]);

      for (int i = 4; i >= 0; i--)
            printf("%d\n", ar[i]);

      return 0;
}