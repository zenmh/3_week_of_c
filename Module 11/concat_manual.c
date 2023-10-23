#include <stdio.h>
#include <string.h>

int main()
{
      char a[100], b[100];
      scanf("%s %s", a, b);

      int i = 0, j = strlen(a);
      while (i <= strlen(b))
      {
            a[j] = b[i];
            i++;
            j++;
      }

      // a[j] = '\0'; // If need add manually null

      printf("%s %s", a, b);

      return 0;
}