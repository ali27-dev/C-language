#include <stdio.h>
#include <string.h>

/*
int main(){
  int age = 19;
  char name ='A';
  float gpa = 3.5;
  double pi = 3.141592;

  printf("%d\n",age);
  printf("%c\n",name);
  printf("%f\n",gpa);
  printf("%lf\n",pi);

  char name[] ="Ali27-dev";

  printf("Hello: %s \n",name);

  return 0;
}
*/
/*
int main(){
  char name[] ="Abid ALi";
  int age = 19;
  char city[] = "Mingora";

 printf("Name: %s, Age: %d, City: %s", name,age,city);

  return 0;
}
  */
/********* FOR-Int **********/

// int main(){
//   int a,b;
//   printf("Enter a Number");
//   scanf("%d %d", &a,&b);
//   printf("Sum = %d",a + b);

//   return 0;
// }

/********* FOR-float **********/
// int main(){
//   float height;

//   printf("Enter Your height in metter, ");
//   scanf("%f", &height);
//   printf("Your height is %.2f metter", height);

//   return 0;
// }

/********* FOR-char **********/
// int main(){
//   char grade;
//   printf("Enter your grade: ");
//   scanf(" %c",&grade);
//   printf("your grade is %c",grade);
//   return 0;
// }

// Prctice Problem
/*
int main(){
  int a = 12;
  float b = 8.67;
 float finalValue = a * b;
 printf("%f", finalValue);
 printf("Your result is: %d", a + b);
  return 0;
}
  */

//  Practice on Formate specifier
/*
int main(){
char name[] = "Abid Ali";
int age = 19;
float height = 5.67;
char grade = 'A';

printf("Your details is\n Name:%s\n Age:%d\n Height:%f\n Grade:%c",name,age,height,grade);

return 0;
}
*/
// Problem 2
/*
int main(){
  float personOne = 87.50;
  float personTwo = 90.25;
  float personThree = 76.75;

  printf("101:  %f\n102:  %f\n103:  %f",personOne,personTwo,personThree);
  return 0;
}
*/
// Assignment:1
// int main(){
//  const int celsius = 36;
//  const float fahrenhite = (celsius *9/5)+32;

//  printf("The Fahrehite is: %.2f",fahrenhite);
//   return 0;
// }

/*
// Assignment:2 make Calculator
int main(){
    int a,b;

  printf("Enter two value for Addition:");
  scanf("%d %d",&a,&b);
  int sum = a+b;
  printf("The Resultof Addition is is: %d",sum);

  int c,d;

  printf("\nEnter two value for multiplication:");
  scanf("%d %d",&c,&d);
  int multi = c*d;
  printf("The Result of multiplication is: %d",multi);
  return 0;
}
  */

/*
// Assignment:
int main(){
  int length,width;

  printf("Enter the Length value:");
  scanf("%d",&length);
  printf("Enter the width value:");
  scanf("%d",&width);
  int perimeter = 2*(length+width);
  printf("The perimeter of rectasngle is: %d",perimeter);
  return 0;6
}
  */
/*
// Assignment:
int main(){
 int a,b,c;

 printf("Enter the a value:");
 scanf("%d",&a);
 printf("Enter the b value:");
 scanf("%d",&b);
 printf("Enter the c value:");
 scanf("%d",&c);
 int perimeter = (a+b+c)/3;
 printf("The averagte of three number is: %d",perimeter);
 return 0;
}
 */
// Assignment:
// int main(){
//    int num1 = 25;
//    int num2 = 30;

//    printf("The num1 value is:%d,The num2 value is:%d\n",num1,num2);
//    printf("For swap the number enter num1 value:");
//    scanf("%d",&num1);
//    printf("For swap the number enter num2 value:");
//    scanf("%d",&num2);

//    printf("The new num1 & num2 value is:%d,%d",num1,num2);
//   return 0;
// }

/*
int main(){
  int a,b;

  printf("Enter two numbers: \n");
  scanf("%d,%d",&a,&b);

  a = a + b;
  b = a - b;
  a = a - b;
  printf("After swapping: a = %d,b = %d",a,b);
  return 0;
}
  */
//  Assignment
/*
int main(){
  char ch;

  printf("Enter a one alphabet letter: ");
  scanf("%c",&ch);

 if (ch == 'a' || ch == 'e' ||ch == 'i' || ch == 'o' ||ch == 'u' || ch == 'A' || ch == 'E' ||ch == 'I' || ch == 'O' || ch == 'U')
  printf("This %c is vowel",ch);
 else
 printf("This %c is not vowel",ch);


  printf("The alphabet letter is: %c",character);
  return 0;
}


// Practice_Assignment

#include <stdio.h>

int main()
{
  int num;

  printf("eneter a number to cheack Even/Odd:");
  scanf("%d", &num);

  if (num & 1)
  {

    printf("%d is Odd\n", num);
  }
  else
  {
    printf("%d is Even\n", num);
  }

  return 0;
}
*/
