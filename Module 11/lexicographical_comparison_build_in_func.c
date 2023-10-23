#include <stdio.h>
#include <string.h>

int main()
{
      char a[100], b[100];
      scanf("%s %s", a, b);

      int value = strcmp(a, b);

      if (value > 0)
            printf("Right Side Is Small");
      else if (value < 0)
            printf("Left Side Is Small");
      else
            printf("The Are Equal");
      return 0;
}