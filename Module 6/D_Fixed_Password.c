#include <stdio.h>

int main()
{
      int x;

      while (scanf("%d", &x) != EOF)
      {
            if (x != 1999)
                  printf("Wrong\n");
            else
            {
                  printf("Correct");
                  break;
            }
      }

      return 0;
}