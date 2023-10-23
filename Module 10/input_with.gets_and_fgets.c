#include <stdio.h>
#include <string.h>

int main()
{
      char a[13];
      gets(a); // Is not standerd

      // fgets(a, 13, stdin);

      printf("%s", a);
      return 0;
}