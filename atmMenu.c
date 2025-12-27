#include <stdio.h>

void checkBalance(int balance)
{
  printf("Your balance is: %d\n", balance);
}

int deposit(int balance, int amount)
{

  return balance + amount;
}

int withdrawaMoney(int balance, int amount)
{
  if (amount > balance)
  {
    printf("insufficent balance!\n");
    return balance;
  }

  return balance - amount;
}
int main()
{
  int balance = 5000, choice, amount;

  while (1)
  {
    printf("\n1. Check Balance\n2.Deposite\n3. Withdraw\n4. Exit\n");
    scanf("%d", &choice);
    if (choice == 4)
      break;
    switch (choice)
    {
    case 1:
      checkBalance(balance);
      break;
    case 2:
      printf("Enter amount for deposit: ");
      scanf("%d", &amount);
      balance = deposit(balance, amount);
      break;
    case 3:
      printf("Enter amount for withdraw:");
      scanf("%d", &amount);
      balance = withdrawaMoney(balance, amount);
      break;
    default:
      printf("Invalid Choice!");
    }
  }
  return 0;
}