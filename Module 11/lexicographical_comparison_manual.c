#include <stdio.h>

int main()
{
      char a[100], b[100];
      scanf("%s %s", a, b);

      int i = 0;

      while (1)
      {
            if (a[i] == '\0' && b[i] == '\0')
            {
                  printf("They Are Same");
                  break;
            }
            else if (a[i] == '\0')
            {
                  printf("A Is Smaller");
                  break;
            }
            else if (b[i] == '\0')
            {
                  printf("B Is Smaller");
                  break;
            }

            if (a[i] == b[i])
                  i++;
            else if (a[i] < b[i])
            {
                  printf("A Is Smaller");
                  break;
            }
            else
            {
                  printf("B Is Smaller");
                  break;
            }
      }

      return 0;
}