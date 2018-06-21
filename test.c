#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
	//lecture 26
	int chipdpid;
	int count1=0; int count2=0;
	printf("before it forks \n");
	
	sleep(5);
	chipdpid=fork();
	
	if(chipdpid==0)
	{
            printf("this is a child process \n");
		
	
	    while(count1 <10)
	    {
		printf("child process: %d\n", count1);
		//lecture 26->4:09
		sleep(1);
		count1++;
	    }
	}
	else
	{
	    printf("this is the parent process \n");
	    while(count2<20)
	    {
		printf("parent process: %d\n", count2);
		//lecture 26->5:25
		sleep(1);
		count2++;
	    }
	}
}
//Lectuer 26 starts
//->https://www.youtube.com/watch?v=tS-9zg3qfMY&list=PLypxmOPCOkHXbJhUgjRaV2pD9MJkIArhg&index=26
//@8:35, it will show how many process is running
//Lecture 26 ends
