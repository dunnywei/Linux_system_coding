#include<stdio.h>
#include<unistd.h>


int add_number(int a,int b)
{
	return (a+b);
}
int main(int argc,char *argv[])
{
	//lecture 15
	int i;
	
	printf("argc is %d\n",argc);
	
	for(i=0;i<argc;i++)
	{
		printf("argv[%d] is %s\n",i,argv[i]);
	}
	
	
	return 0;
	
	
}
//Lectuer 15 starts
//C Programming in Linux Tutorial #015 - argc argv 
/*
 *->argc is the # of arguments 
 *->argv is the content
*->execute this program like ./test one two three
*->                          ./test one two three "hello world" hey
*->system treat quotes "hello world" as one string (7:47)
*/
