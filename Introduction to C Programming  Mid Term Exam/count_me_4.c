#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
      char s[10001];
      scanf("%s", s);
      int i, cnt[26] = {0};
      for (i = 0; i < strlen(s); i++)
            cnt[s[i] - 97]++;

      for (i = 0; i < 26; i++)
      {
            if (cnt[i] != 0)
                  printf("%c - %d\n", i + 97, cnt[i]);

            cnt[i] = 0;
      }
      return 0;
}
