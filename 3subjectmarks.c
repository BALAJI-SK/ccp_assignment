#include<stdio.h>
int main()
{
  int i,j,high;
  int marks[5][3];

      printf("enter the marks of  students\n");
  for(i=0;i<5;i++)
  { printf("enter the marks of student %d\n",i+1);
    for(j=0;j<3;j++)
    scanf("%d",&marks[i][j]);

  }
  high=marks[0][0];
  for(i=0;i<3;i++)
  {
    for(j=0;j<5;j++)
    {
      if(marks[j][i]>=high)
      high=marks[j][i];
    }
    printf("\n the hightest marks  in subject %d is marks= %d \n ",i+1,high);
    high=marks[0][i+1];
  }
}
