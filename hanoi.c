#include <stdio.h>

void hanoi(int n, int a, int b, int c)
{
  if (n == 1) 
    printf("kamen 1 z %d do %d\n", a, b);
  else
  {
    hanoi(n - 1, a, b, c);
    printf("kamen %d z %d do %d\n", n, a, b);
    hanoi(n - 1, c, b, a);
  }
}

int main()
{
  int n = 4;

  hanoi(n, 1, 2, 3);
  return 0;
}
