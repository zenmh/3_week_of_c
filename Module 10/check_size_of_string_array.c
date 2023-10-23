#include <stdio.h>

int main()
{
      char a[6];
      int size = sizeof(a) / sizeof(char);

      // Int take 4 byte and char take 1 byte

      printf("%d", size);
      return 0;
}