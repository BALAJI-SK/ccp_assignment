#include<stdio.h>
int main()
{
  int i,j,r,c;
  int trans[10][10],mat[10][10];
    printf("enter the number of rows and colums\n");
    scanf("%d\n%d",&r,&c);
      printf("enter the values of matrix\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    scanf("%d",&mat[i][j]);

  }
    printf("\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        trans[j][i]=mat[i][j];
    }
        printf("\n the transpose matrix\n");
        for(i=0;i<c;i++)
        {
          for(j=0;j<r;j++)
          printf("%d\t",trans[i][j]);

        printf("\n");
      }
        printf("the given matrix\n");
        for(i=0;i<r;i++)
        {
          for(j=0;j<c;j++)
          printf("%d\t",mat[i][j]);
        printf("\n");
      }

}
