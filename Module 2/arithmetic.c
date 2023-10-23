#include <stdio.h>

int main()
{
      int a = 10, b = 20;

      // Plus Int
      int plusInt = a + b;
      printf("%d", plusInt);

      float plusFloat = a + b;
      printf("%f", plusFloat);

      // Minus Int
      int mnsInt = b - a;
      printf("%d", mnsInt);

      float mnsFloat = b * 1.0 - a;
      printf("%f", mnsFloat);

      // Multiply
      int mltInt = a * b;
      printf("%d", mltInt);

      float mltFloat = a * 1.0 * b;
      printf("%f", mltFloat);

      // Devide
      int dvdInt = b / a;
      printf("%d", dvdInt);

      float dvdFloat = b / a;
      printf("%f", dvdFloat);

      // Modulus
      int mod = b % a;
      printf("%d", mod);

      return 0;
}