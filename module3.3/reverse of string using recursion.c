#include<stdio.h>
void fun()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		fun();
		printf("%c",c);
	}
}
void main()
{
	printf("Enter any string:");
	fun();
}