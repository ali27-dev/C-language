#include <stdio.h>
#include <math.h>
// declaration/prototype

void abid(int a, int b)
{
  int prod = a * b;
  printf("the product of two values is: %d\n", prod);
}
/*
void printHello();
void goodBye();
void namaste();
void banjour();
int sum(int a, int b);
void numTable(int n);
float areaSqure(float side);
float areaCircul(float rad);
float areaRectangle(float a, float b);
int printHW(int count);
int sum(int n);
*/

// float percentageStu(int sub1, int sub2, int sub3);

// void print(void *x, int type)
// {
//   if (type == 1)
//   {
//     printf("Integer: %d\n", *((int *)x));
//   }
//   else if (type == 2)
//   {
//     printf("Float: %.2f\n", *((float *)x));
//   }
// }

// int main()
// {
// printf("Area of the Squre:%.2f\n", areaSqure(6.7));
// printf("Area of the Circule:%.2f\n", areaCircul(3.5));
// printf("Area of the Circule:%.2f\n", areaRectangle(5.9, 3.6));
// printf("Sum is: %d", sum(5));
// printHW(5);
//   printf("Total percentage is :%f", percentageStu(78, 84, 78));
//   return 0;
// }

////////// funx Definition ///////
/*
void printHello()
{
  printf("Hello!\n");
}
void goodBye()
{
  printf("GoodBye!\n");
}

void namaste()
{
  printf("Namste!");
}
void banjour()
{
  printf("Banjour!");
}

int sum(int a, int b)
{
  return a * b;
}


void numTable(int n)
{
  for (int i = 1; i <= 10; i++)
  {
    printf("%d\n", i * n);
  }
}
float areaSqure(float side)
{
  return side * side;
}

float areaCircul(float rad)
{
  return 3.14 * rad * rad;
}
float areaRectangle(float a, float b)
{
  return a * b;
}
int printHW(int count)
{
  if (count == 0)
  {
    return 0;
  }

  printf("Hello World\n");
  printHW(count - 1);
}
int sum(int n)
{
  if (n == 1)
  {
    return 1;
  }
  int sumNm1 = sum(n - 1);
  int sumN = sumNm1 + n;
  return sumN;
}
  */

// float percentageStu(int sub1, int sub2, int sub3)
// {
//   return (sub1 + sub2 + sub3) / 3;
// }

int main()
{
  int a = 2, b = 4;
  abid(8, 9);
  abid(34, 78);
  abid(65, 2);
  abid(34, 78);
  printf("the value of a is : %d & the value of b is: %d\n", a, b);
  return 0;
}
