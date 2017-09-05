#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int count = 0, count_1 = 0, count_2 = 0, count_3 = 0, n;

struct Student
{
  char Name[10];
  int reg_no;
  char branch[20];
  float cgpa;
  int marks;

};


void addNew(struct Student s[])
{
  int i;


  printf("You have the following branches to choose from 1: Mech 2:CSC 3:Aero 4:Arch");


  for(i=0;i<6;i++)
  {
    printf("\n Enter the name of the student: %d ", i+1);
    scanf("%s", &s[i].Name);
    printf("\n Enter the marks");
    scanf("%d", &s[i].marks);
    printf("\n Enter cgpa");
    scanf("%f", &s[i].cgpa);
    printf("\n choose the branch");
    scanf("%s", &s[i].branch);


    if(strcmp(s[i].branch, "Mech") == 0)
    {
      s[i].reg_no = 17*1000 + count;
      count++;
      printf("\n His reg_no is %d",s[i].reg_no );

    }

    if(strcmp(s[i].branch, "CSC") == 0)
    {
      s[i].reg_no = 18*1000 + count_1;
      count_1++;
      printf("\n His reg_no is %d",s[i].reg_no );
    }


    if(strcmp(s[i].branch, "Aero") == 0)
    {
      s[i].reg_no = 19*1000 + count_2;
      count_2++;
      printf("\n His reg_no is %d",s[i].reg_no );

    }

    if(strcmp(s[i].branch, "Arch") == 0)
    {
      s[i].reg_no = 20*1000 + count_3;
      count_3++;
      printf("\n His reg_no is %d",s[i].reg_no );

    }



  }

}


void displayMarks(struct Student s[])
{

  int i;
  n = count + count_1 + count_2 + count_3;

  for(i=0;i<n;i++)
    if(s[i].marks > 90)
      printf("\nThe marks of the student of reg num %d are: %d",s[i].reg_no, s[i].marks);

}


void countStudents()
{
  printf("\n\nThe number of students in branches Mech is %d and in CSC is %d and in Aero is %d and in Arch is %d",count, count_1, count_2, count_3);


}

void displayAll(struct Student s[])
{
  int i;

  for(i=0;i<n;i++)
    printf("\n %s %d %d %f ", s[i].Name, s[i].reg_no, s[i].marks, s[i].cgpa);


}


int main()

{
  int i;
  struct Student s[20];

  addNew(s);

  displayMarks(s);

  countStudents();

  displayAll(s);




  return 0;
}
