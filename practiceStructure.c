#include <stdio.h>
#include <string.h>

struct student
{
  char name[100];
  int roll;
  float cgpa;
};

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