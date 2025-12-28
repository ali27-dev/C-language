#include <stdio.h>

/*
int main()
{
  FILE *fptr;
  fptr = fopen("NewTest.txt", "r");
  if (fptr == NULL)
  {
    printf("File does'n exist!]\n");
  }
  else
  {
    fclose(fptr);
  }

  return 0;
}

int main()
{
  FILE *fptr;
  fptr = fopen("Test.txt", "r");
  char ch;
  fscanf(fptr, "%c", &ch);
  printf("character = %c\n", ch);
  fscanf(fptr, "%c", &ch);
  printf("character = %c\n", ch);
  fscanf(fptr, "%c", &ch);
  printf("character = %c\n", ch);
  fscanf(fptr, "%c", &ch);
  printf("character = %c\n", ch);
  fscanf(fptr, "%c", &ch);
  fclose(fptr);
  return 0;
}

int main()
{
  FILE *fptr;
  fptr = fopen("Test.txt", "a");

  fprintf(fptr, "%c", 'A');
  fprintf(fptr, "%c", 'B');
  fprintf(fptr, "%c", 'I');
  fprintf(fptr, "%c", 'D');

  fclose(fptr);
  return 0;
}


int main()
{
  FILE *fptr;
  fptr = fopen("Test.txt", "r");

  char ch;
  ch = fgetc(fptr);
  while (ch != EOF)
  {
    printf("%c", ch);
    ch = fgetc(fptr);
  }
  printf("\n");

  fclose(fptr);
  return 0;
}
      */

int main()
{
  FILE *fptr;
  fptr = fopen("pracData.txt", "w");
  char name[100];
  int marks;
  float cgpa;

  printf("Enter name:");
  scanf("%s", name);
  printf("Enter marks:");
  scanf("%d", &marks);
  printf("Enter cgpa:");
  scanf("%f", &cgpa);

  fprintf(fptr, "Student name : %s\n", name);
  fprintf(fptr, "Student mark : %d\n", marks);
  fprintf(fptr, "Student cgpa : %f", cgpa);

  fclose(fptr);
  return 0;
}