#include <stdio.h>
#include <string.h>

int main()
{
      char s[1001];
      scanf("%s", s);

      int i = 0, j = strlen(s) - 1, ans = 1;

      while (i < j)
      {
            if (s[i] != s[j])
            {
                  ans = 0;
                  break;
            }
            i++;
            j--;
      }

      if (ans == 1)
            printf("YES");
      else
            printf("NO");

      return 0;
}