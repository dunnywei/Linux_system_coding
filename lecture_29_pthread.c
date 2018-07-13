//C Programming in Linux Tutorial #029 - pthreads
//https://www.youtube.com/watch?v=n9IT5RAludA&list=PLypxmOPCOkHXbJhUgjRaV2pD9MJkIArhg&t=0s&index=30
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *myfunc(void *myvar)
{
   char* message= (char *)myvar;
   int i;
   for(i=0;i<10;i++)
   {
      printf("the value of is is %d \n",i);
      sleep(1);
   }
   printf("At my funcs %s\n",myvar);
   
   return;
}

int main(int argc,char* argv[])
{
   //lecture_29 (2:01)
   pthread_t thread1,thread2;
   char *msg1="first thread";
   char *msg2="second thread";
   int ret1,ret2;
   ret1=pthread_create(&thread1,NULL, myfunc,(void *)msg1);
   ret2=pthread_create(&thread1,NULL, myfunc,(void *)msg2);
   
   printf("Main function after pthread creates\n");
   //4:46
   printf("First  thread ret1=%d\n",ret1);
   printf("Second thread ret2=%d\n",ret2);
   
   

   pthread_join(thread1,NULL);//thread 1 and 2 will join the main thread in one process
   pthread_join(thread2,NULL);
}

//https://www.onlinegdb.com/online_c_compiler
