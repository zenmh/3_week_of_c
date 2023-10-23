#include <stdio.h>
#include <string.h>

int main()
{
      char s[1001], t[1001];
      scanf("%s %s", s, t);

      printf("%d %d\n%s %s", strlen(s), strlen(t), s, t);

      return 0;
}