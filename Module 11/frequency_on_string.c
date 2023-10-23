#include <stdio.h>
#include <string.h>

int main()
{
      char s[100];
      scanf("%s", s);

      int i, cnt[26] = {0};
      for (i = 0; i < strlen(s); i++)
            cnt[s[i] - 97]++;

      for (i = 0; i < 26; i++)
            if (cnt[i] != 0)
                  printf("%c is %d times\n", i + 97, cnt[i]);

      // for (i = 0; i < strlen(s); i++)
      // {
      //       int val = s[i] - 97;
      //       if (cnt[val] != 0)
      //             printf("%c - %d\n", val + 97, cnt[val]);
      //       cnt[val] = 0;
      // }
      return 0;
}