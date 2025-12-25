#include <stdio.h>

// void _swap(int *a, int *b);
void printAdd(int *n);
/*
int main()
{
  int x;
  int *ptr;

  ptr = &x;
  *ptr = 0;

  printf("x = %d\n", x);
  printf("*ptr = %d\n", *ptr);

  *ptr += 5;
  printf("x = %d\n", x);
  printf("*ptr = %d\n", *ptr);

  (*ptr)++;
  printf("x = %d\n", x);
  printf("*ptr = %d\n", *ptr);

  return 0;
}


int main()
{
  int x = 4;
  int y = 7;
  _swap(&x, &y);
  printf("x = %d & y = %d\n", x, y);
  return 0;
}

void _swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;

  printf("a = %d & b = %d\n", *a, *b);
}
  */

int main()
{
  int n = 4;
  printAdd(&n);
  printf("Address 0f n = %u\n", &n);
  return 0;
}

void printAdd(int *n)
{
  printf("Address 0f n = %u\n", n);
}