#include <stdio.h>
#include <string.h>

// int main(){
//   const int celsius = 36;
//   float fahrenhite = (celsius*9/5)+32;
//   printf("The Fahrenhite: %.3f",fahrenhite);
//   return 0;
// }

/*
int main(){
  int a,b;
  printf("Enter first number for adding:");
  scanf("%d",&a);
  printf("Enter second number for adding:");
  scanf("%d",&b);
  int sum = a+b;
  printf("The reasult of sum is %d",sum);
  return 0;
}
  */

/*
int main(){
  int grade;
  printf("enter a your numbers:");
  scanf("%d",&grade);
  if (grade >= 90){
    printf("%d your grade:A",grade);
  }else if (grade>= 80)
  {
    printf("%d your grade:B",grade);
  }else if (grade>= 70)
  {
    printf("%d your grade:C",grade);
  }else if (grade>= 60)
  {
    printf("%d your grade:D",grade);
  }else if (grade<= 50)
  {
    printf("%d your grade:Fail",grade);
  }
  return 0;
}
  */

/*
int main(){
  int number;
  printf("enter a your numbers:");
  scanf("%d",&number);
  if (number % 2 ==0){
    printf("%d is even number",number);
  }else{
  printf("%d is Odd number",number);
  }
  return 0;
}


int main(){
  int marks;

  printf("Enter your marks to cheack your grade:");
  scanf("%d",&marks);

  if (marks>=20 && marks<=30)
  {
    printf("%d You are: Pass",marks);
  }else if (marks <= 15)
  {
    printf("%d your are: Fail",marks);
  }else{
    printf("Your giveing wrong marks");
  }



  return 0;
}


int main(){
  char day;

  printf("Enter first letter of days name to cheack your day activite:");
  scanf("%c",&day);

switch (day)
{
case 'm': printf("Monday \n");
break;
case't' : printf("Tuesday \n");
break;
case 'w' : printf("Wensday \n");
break;
case 'T' : printf("Thursday \n");
break;
case'f' : printf("Monday \n");
break;
case 's' : printf("Monday \n");
break;
default: printf("Please type latter of first  day name in lowerCase");
break;
}
return 0;
}



// ATM-LOGIC
int main()
{
  int choice;
  float balance = 10000, amount;

  printf("======ATM-MENU======\n");
  printf("1.Check Balance\n");
  printf("2.Withdraw Money\n");
  printf("3.Deposit Money\n");
  printf("4.Exist\n");
  printf("Enter Your Choice\n");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    printf("Your current balance:%.2f PKR\n", balance);
    break;
  case 2:
    printf("Enter Amount to withdraw:");
    scanf("%f", &amount);
    if (amount >= balance)
    {
      printf("Insufficent Balance.");
    }
    else if (amount <= 0)
    {
      printf("Ivalide Amount");
    }
    else
    {
      balance = balance - amount;
      printf("withdrawal Successfull!\nNew Blance:%.2fPKR", balance);
    }
    break;
  case 3:
    printf("Enter Amount to Deposite:");
    scanf("%f", &amount);
    if (amount <= 0)
    {
      printf("Invalide Amount");
    }
    else
    {
      balance = balance + amount;
      printf("Deposite Successfull!\nNew Amount is:%.2f PKR\n", balance);
    }
    break;
  case 4:
    printf("Thank You For Using ATM.\n");
  default:
    printf("Invalid Option");
  }
  return 0;
}
*/
/*
  //  Eclectricity Bill
  int main(){
    int units;
    float bill;

     printf("Enter consumed units:");
     scanf("%d",&units);

     if (units <= 0)
     {
      printf("Invalid units");
     }else if (units <100)
     {
     bill = units * 5.0;
     }else if (units <= 300)
     {
      bill =(units * 5.0) + (units-100)*7.0;
     }else{
      bill = (100 * 5.0) + (200 * 7.0) + (units -300)*10.0;
     }

     printf("The to total electricity units you consumed:%.2f",bill);

    return 0;
  }


int main()
{
  char username[20];
  char password[20];

  printf("Enter username: \n");
  scanf("%s", username);
  printf("Enter username: %s\n", username);
  if (strcmp(username, "admin") == 0)
  {
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(password, "1234") == 0)
    {
      printf("Login successful.\n");
    }
    else
    {
      printf("Incorrect Password.\n");
    }
  }
  else
  {
    printf("User Not Found");
  }
  return 0;
}
    */

/////////////// LOOPs //////////////
/*
int main()
{
  int num;
  printf("Enter a number to create table for it:");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++)
  {
    i = i * num;
    printf("%d \n", num);
  }

  return 0;
}


int main()
{
  int sum = 0;

  for (int i = 2; i <= 90; i = i + 2)
  {
    sum = sum + i;
  }
  printf("%d", sum);
  return 0;
}


#include <stdio.h>

int main()
{
  int units;
  float bill;

  for (int i = 1; i <= 5; i++)
  {
    printf("Enter consumed units for %d person:\n", i);
    scanf("%d", &units);
    printf("The unit of the %d person bill is:%d\n", i, units);
    if (units <= 100)
    {
      bill = units * 5.0;
    }
    else if (units <= 300)
    {
      bill = (units * 5.0) + (units - 100) * 7.0;
    }
    else
    {
      bill = (units * 7.0) + (units - 100) * 10.0;
    }
    printf("The total bill amount is:%.2f:\n", bill);
  }

  return 0;
}


int main()
{
  int marks, totalMarks;

  for (int i = 1; i <= 3; i++)
  {
    printf("%d Student: \n", i);
    totalMarks = 0;

    for (int j = 1; j <= 3; j++)
    {
      printf("Enter your %d paper marks:\n", j);
      scanf("%d", &marks);
      totalMarks = totalMarks + marks;
    }
    printf("The Total marks of %d student is:%d\n", i, totalMarks);
  }

  return 0;
}


int main()
{
  int num;
  printf("Enter number to print table for it:\n");
  scanf("%d", &num);
  for (int i = 1; i <= 10; i++)
  {
    printf("%d x %d = %d\n", num, i, num * i);
  }

  return 0;
}


int main()
{
  for (int i = 1; i <= 4; i++)
  {
    for (int j = 0; j <= 4; j++)
    {
      printf(" * ");
    }
    printf(" \n");
  }

  return 0;
}


int main()
{
  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}


//  WHILE-Loop///

int main()
{
  int PIN = 1234, userPIN, attemps = 0;

  while (attemps < 3)
  {
    printf("Enter your PIN:\n");
    scanf("%d", &userPIN);

    if (userPIN == PIN)
    {
      printf("PIN is correct!\n");
      return 0;
    }
    else
    {
      printf("PIN is Incorrect!\n");
    }
    attemps++;
  }
  printf("Account Locked!\n");
  return 0;
}


int main()
{
  char pass[20];

  while (1)
  {
    printf("Enter your password to login your account:\n");
    scanf("%s", pass);
    if (strcmp(pass, "1234") == 0)
    {
      printf("Login Successful!\n");
      break;
    }
    else
    {
      printf("Try Again!\n");
    }
  }

  return 0;
}

int main()
{
  int num, count = 0;
  printf("Enter a number:\n");
  scanf("%d", &num);

  while (num != 0)
  {
    num = num / 10;
    count++;
  }
  printf("Total Digits:%d\n", count);

  return 0;
}
  */