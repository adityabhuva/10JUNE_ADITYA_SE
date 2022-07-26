#include<stdio.h>
int main()
{
	int no,r,f;
	printf("Enter any Number:");
	scanf("%d",&no);
	f=no%10;
	while(no!=0)
	{
		r=no%10;
		no=no/10;
	}
	printf("sum of Number:%d",f+r);
}