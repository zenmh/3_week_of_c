#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
      int n;
      scanf("%d", &n);
      for (int i = 0; i < n; i++)
      {
            char s[10001];
            scanf("%s", s);

            int i, cap = 0, sml = 0, dgt = 0;
            for (i = 0; i < strlen(s); i++)
            {
                  if (s[i] >= 'a' && s[i] <= 'z')
                        sml++;
                  else if (s[i] >= 'A' && s[i] <= 'Z')
                        cap++;
                  else
                        dgt++;
            }

            printf("%d %d %d\n", cap, sml, dgt);
      }

      return 0;
}
