#include <stdio.h>
#include <string.h>

void print_array(int *a)
{
  int i;
  for(i=0;i<10;i++)
      printf("a[%d] is %d \n",i,a[i]);
}

int main(int argc, char *argv[])
{
  int a[10]={8,20,5,11,21,45,7,2,22,17};
  
  int i,j,n;//i from left to right and j from right to left
  
  for(i=9;i>0;i--)
  {
      for(j=0;j<i;j++)
      {
         //the reason for j<i is that after each iteration, the biggest number will be shift to the right
         if(a[j]>a[j+1])
         {
           n=a[j];
           a[j]=a[j+1];
           a[j+1]=n;
         }
         printf("j is %d, i is %d \n",j,i);
      }
      print_array(a); 
  }
  
  
  return 0;
}

//good exlpaination in bubble sort->https://www.youtube.com/watch?v=Jdtq5uKz-w4
//on line compiler->https://www.onlinegdb.com/online_c_compiler
