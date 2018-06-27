#include<stdio.h>
#include<string.h>
#include<unistd.h>



int main(int argc,char *argv[])
{
	//lecture 18
	char str[24]="first string";
	char *ptr="second string";
	//They are not the same
	
	printf("str is %s\n",str);
	printf("ptr is %s\n",ptr);
	
	
	ptr++;
	printf("second step, ptr is %s\n",ptr);
	//(7:38)after the incremental, the ptr points to a pointer which points to
	//the address of "econd string"
	
	/*
	str++;
	printf("str is %s\n",str);
	*/
	//should generate compile error (8:12)

	
	
	
	return 0;
	
	
}
//C Programming in Linux Tutorial #018 - Char Pointer vs Array Char
/*
Elabroation in memory (3:13)
str contains the first address of "first string"

ptr contains a pointer which will point to the first address of "second string"
*/
