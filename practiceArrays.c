#include <stdio.h>

/*
int main()
{
  float price[3];
  float price[3] ={23,67,56};
  int a = price[3];
  printf("The a vari value is:%d\n", a);
  printf("Enter Price for item:");
  scanf("%f", &price[0]);
  scanf("%f", &price[1]);
  scanf("%f", &price[2]);

  printf("Total Price: %.2f\n", price[0] - (0.18 * price[0]));
  printf("Total Price: %f\n", price[1] - (0.18 * price[1]));
  printf("Total Price: %f\n", price[2] - (0.18 * price[2]));

  printf()
  return 0;
}
  */
// int findMax(int arr[], int size)
// {
// for (int i = 1; i < size; i++)
// {
//   int max = arr[0];
//   if (arr[i] > max)
//   {
//     max = arr[i];
//     return max;
//   }
// }
// }

int main()
{
  float a = 5;
  int *ptr = &a;
  int value = *ptr;
  printf("the add of a = %p\n", ptr);
  printf("the add of a = %d\n", value);

  // int marks[5] = {78, 89, 67, 98, 40};
  // printf("Highest marks = %d", findMax(marks, 5));
  return 0;
}