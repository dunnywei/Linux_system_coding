#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int a[10]={8,20,5,11,21,45,7,2,22,17};
  
  int i,j,n;//i from left to right and j from right to left
  
  for(i=9;i>0;i--)
  {
      for(j=0;j<i;j++)
      {
         if(a[j]>a[j+1])
         {
           n=a[j];
           a[j]=a[j+1];
           a[j+1]=n;
         }
      }
  }
  for(i=0;i<10;i++)
      printf("a[%d] is %d ",i,a[i]);
  
  return 0;
}


