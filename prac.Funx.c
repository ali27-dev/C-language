#include <stdio.h>

// int addition(int a, int b)
// {
//   int sum = a + b;
//   printf("The sum is: %d", sum);
// } a
// float division(float a, float b)
// {

//   float division = a / b;

//   printf("the value is: %f", a / b);
// }
/*
int average(int a, int b, int c)
{
  int average = (a + b + c) / 3;
  printf("the average is:%d", average);
}
int main()
{
  average(24, 2, 4);

  // addition(50, 49);
  return 0;
}
*/

void _swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;

  printf("a = %d & b = %d\n", *a, *b);
}

int main()
{
  int a = 7, b = 3;
  _swap(&a, &b);
  return 0;
}