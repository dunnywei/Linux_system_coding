#include<stdio.h>
#include<string.h>
#include<unistd.h>



int main(int argc,char *argv[])
{
	//lecture 17
	char str[24];
	char str2[24];
	int i=4;
	int n;
	//sprintf(str,"hello world!");
	
	sprintf(str,"i is %d",i);//3:10
	
	
	printf("%s\n",str);
	
	n=strlen(str);
	
	printf("length of str is %d\n",n);
	
	
	strcpy(str2,str);
	
	printf("the content of str2 is %s\n",str2);
	
	memset(str,0,24);//usefull for embedded linux
	memset(str,'a',10);
	//11th will be null terminator for string (10:46)
	//type "man string.h" in CLI (11:05)
	printf(">%s<\n",str);
	
	return 0;
	
	
}
//Lectuer 17 starts
//C Programming in Linux Tutorial #017 string function and operation  
/*
 
*/
