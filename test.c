#include<stdio.h>
#include<unistd.h>


int add_number(int a,int b)
{
	return (a+b);
}
int main(int argc,char *argv[])
{
	//lecture 13
	//First way
	/*
	int result=add_number(a+b);
	printf("result is %d \n",result);
	*/
	//second way
	int (*my_func_ptr)(int,int);
	my_func_ptr=&add_number;
	int result=my_func_ptr(3,4);
	printf("result is %d \n",result);
	
}
//Lectuer 13 starts
//https://www.youtube.com/watch?v=HK1ujzlrqqw&index=13&list=PLypxmOPCOkHXbJhUgjRaV2pD9MJkIArhg
/*
 *->function pointer points to a particular slots in the memory (0:20)
 *
*
*/
