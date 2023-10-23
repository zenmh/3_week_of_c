#include <stdio.h>
#include <string.h>

int main()
{
      char a[11], b[11], c[1];
      scanf("%s %s", a, b);

      printf("%d %d\n%s%s\n", strlen(a), strlen(b), a, b);

      c[0] = a[0];
      a[0] = b[0];
      b[0] = c[0];

      printf("%s %s", a, b);

      return 0;
}