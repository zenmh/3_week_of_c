#include <stdio.h>
#include <string.h>

int main()
{
      char a[100], b[100];
      scanf("%s %s", a, b);

      for (int i = 0; i <= strlen(b); i++) // make sure the lenth should be the count of b to take the null char
            a[i] = b[i];

      printf("%s", b);

      return 0;
}