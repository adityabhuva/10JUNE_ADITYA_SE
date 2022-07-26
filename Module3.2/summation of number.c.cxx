#include<stdio.h>
int main()
{
	int no,sum=0,r;
	printf("Enter any Number:");
	scanf("%d",&no);
	while(no>0)
	{
		r=no%10;
		sum=sum+r;
		no=no/10;
	}
	printf("sum of Number:%d",sum);
}