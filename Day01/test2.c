#include <stdio.h>



int ft_sum_triangle(int x, int y, int z)
{
  int sum = x + y;
  if (x + y > z && x + z > y && y + z > x)
  {
    if (x == y && y == z)
    {
      printf("Équilatéral");
    }
    else if (x == y || x == z || y == z)
    {
      printf("Isocèle");
    }
    else
    {
      printf ("Scalène");
    }
  }
  else
  printf("error");
}
int main()
{
  int a = 4;
  int b = 9;
  int c = 4;
  ft_sum_triangle(a, b, c);
  
}