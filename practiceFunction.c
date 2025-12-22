#include <stdio.h>
#include <math.h>
// declaration/prototype
/*
void printHello();
void goodBye();
void namaste();
void banjour();
int sum(int a, int b);
void numTable(int n);
*/

float areaSqure(float side);
float areaCircul(float rad);
float areaRectangle(float a, float b);

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

int main()
{
  printf("Area of the Squre:%.2f\n", areaSqure(6.7));
  printf("Area of the Circule:%.2f\n", areaCircul(3.5));
  printf("Area of the Circule:%.2f\n", areaRectangle(5.9, 3.6));

  return 0;
}

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
  */
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