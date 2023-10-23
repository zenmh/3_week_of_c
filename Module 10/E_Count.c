#include <stdio.h>
#include <string.h>

int main()
{
      char s[1000001];
      scanf("%s", s);

      int i, sum = 0;

      for (i = 0; i < strlen(s); i++)
            sum += s[i] - 48;

      printf("%d", sum);

      return 0;
}