#include <stdio.h>

void hanoi(int n, int a, int b)
{
  if (n == 1) 
    printf("kamen 1 z to %d\n", a, b);
  else
  {
    hanoi(n - 1, a, b);
    printf(" %d from %d to %d\n", n, a, b);
    hanoi(n - 1, b, a);
  }
}

int main()
{
  int n = 4;

  hanoi(n, 1, 2);
  return 0;
}
