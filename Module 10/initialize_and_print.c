#include <stdio.h>

int main()
{
      char a[7] = "Mehedi"; // There have a hidden \0 that means null
      printf("%s", a);

      return 0;
}