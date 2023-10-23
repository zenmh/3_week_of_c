#include <stdio.h>
#include <string.h>

int main()
{
      char a[100];
      scanf("%s", a);

      int i = 0, count = 0, size = 0;

      for (i = 0; a[i] != '\0'; i++) // Take string length by for loop
            count++;

      while (a[i] != '\0') // Take string length by while loop
      {
            count++;
            i++;
      }

      size = strlen(a); // Take string length by built in function

      printf("%d", size);

      return 0;
}