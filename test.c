#include<stdio.h>
int main(int argc,char *argv[])
{
	//lecture 26
	int chipdpid;
	int count1=0; int count2=0;
	printf("before it forks \n");
	
	chipdpid=fork();
	
	if(chipdpid==0)
	{
		printf("this is a child process \n");
		
	}
	while(count <10)
	{
		prinf("child process");
		//lecture 26->4:09
		
	}
}