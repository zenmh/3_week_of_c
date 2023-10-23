#include <stdio.h>

int main()
{
      char a[7];
      scanf("%s", &a); // there have a issue with windows. Windows make extra memory alocate.
      printf("%s", a);
      return 0;
}