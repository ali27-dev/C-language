#include <stdio.h>
#include <string.h>
/*
struct student
{
  char name[100];
  int roll;
  float cgpa;
};
int main()
{
  struct student s1 = {"Abid", 256201, 3.6};

  printf("Student name is = %s\n", s1.name);
  printf("Student name is = %d\n", s1.roll);
  printf("Student name is = %f\n", s1.cgpa);
  return 0;
}

int main()
{
  struct student s1;
  s1.roll = 256201;
  s1.cgpa = 3.6;
  // s1.name = "Abid";
  strcpy(s1.name, "Abid");

  printf("Student name is = %s\n", s1.name);
  printf("Student name is = %d\n", s1.roll);
  printf("Student name is = %f\n", s1.cgpa);
  return 0;
}

int main()
{
  struct student IT[100];
  IT[0].roll = 256201;
  IT[0].cgpa = 3.6;
  // s1.name = "Abid";
  strcpy(IT[0].name, "Abid");

  printf("Student name is = %s\n", IT[0].name);
  printf("Student name is = %d\n", IT[0].roll);
  printf("Student name is = %f\n", IT[0].cgpa);
  return 0;
}

int main()
{
  int i = 0;
  while (i <= 20)
  {
    if (i >= 20)
    {
      printf("the value is : %d\n", i);
    }
    i++;
  }

  return 0;
}


struct address
{
  int houseNo;
  int blockNo;
  char city[100];
  char state[100];
};

void printAdd(struct address add);

int main()
{
  struct address adds[5];

  printf("Enter address for first person:");
  scanf("%d", &adds[0].houseNo);
  scanf("%d", &adds[0].blockNo);
  scanf("%s", &adds[0].city);
  scanf("%s", &adds[0].state);

  printf("Enter address for second person:");
  scanf("%d", &adds[1].houseNo);
  scanf("%d", &adds[1].blockNo);
  scanf("%s", &adds[1].city);
  scanf("%s", &adds[1].state);

  printf("Enter address for third person:");
  scanf("%d", &adds[2].houseNo);
  scanf("%d", &adds[2].blockNo);
  scanf("%s", &adds[2].city);
  scanf("%s", &adds[2].state);

  // printf("Enter address for fourth person:");
  // scanf("%d", &adds[3].houseNo);
  // scanf("%d", &adds[3].blockNo);
  // scanf("%s", &adds[3].city);
  // scanf("%s", &adds[3].state);

  // printf("Enter address for fifth person:");
  // scanf("%d", &adds[4].houseNo);
  // scanf("%d", &adds[4].blockNo);
  // scanf("%s", &adds[4].city);
  // scanf("%s", &adds[4].state);

  printAdd(adds[0]);
  printAdd(adds[1]);
  printAdd(adds[2]);
  // printAdd(adds[3]);
  // printAdd(adds[4]);
  return 0;
}

void printAdd(struct address add)
{

  printf("The address is= %d,%d,%s,%s\n", add.houseNo, add.blockNo, add.city, add.state);
}
   */
struct Product
{
  int id;
  char name[20];
  float price;
  int qty;
  char supplier[20];
};
int main()
{
  struct Product p[5] = {
      {1001, "Laptop", 50000, 15, "TechCorp"}};

  return 0;
}
