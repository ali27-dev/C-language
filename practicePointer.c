#include <stdio.h>

// void _swap(int *a, int *b);
// void printAdd(int *n);
void doWork(int a, int b, int *sum, int *prod, int *avg);
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

int main()
{
  int a = 8, b = 6;
  int *sum, *prod, *avg;
  doWork(a, b, &sum, &prod, &avg);
  printf("Value of a is:%d\n value of b is:%d\n sum of a&b is %u\n prod of a&b is %u\n avg of a&b is %u", a, b, sum, prod, avg);
  return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg)
{
  *sum = a + b;
  *prod = a * b;
  *avg = (a + b) / 2;
}
     */