#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
      char s[100001];
      scanf("%s", s);

      int i, c = 0;

      for (i = 0; i < strlen(s); i++)
      {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {

                  c++;
            }
      }

      printf("%d", c);

      return 0;
}