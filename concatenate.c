#include<stdio.h>
int main()
{
  char str[100],ser[100],concat[200];
  int i=0,k,j=0,l;
  printf("input the two strings\t");
  gets(str);
  gets(ser);
  while(str[i]!='\0')
  {concat[i]=str[i];
  i++;}
  printf("\n the size of first string is =%d",i);
  while(ser[j]!='\0')
  {concat[i]=ser[j];
    j++;
    i++;
  }
  printf("\n the size of second string is =%d\n",j);
  puts(concat);
  printf("\n");


  }
