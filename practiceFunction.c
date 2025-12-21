#include <stdio.h>
// declaration/prototype
/*
void printHello();
void goodBye();
void namaste();
void banjour();
int sum(int a, int b);
*/
void numTable(int n);

int main()
{
  int n;
  printf("Enter a Number:");
  scanf("%d", &n);
  numTable(n);
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
     */

void numTable(int n)
{
  for (int i = 1; i <= 10; i++)
  {
    printf("%d\n", i * n);
  }
}