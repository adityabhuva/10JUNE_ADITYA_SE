#include<stdio.h>

struct employe
{
	char empname[25],address[30];
	int empno,empage;
};
int main()
{
	struct employe e1[5];
	int emp,i;
	
	for(i=1;i<=2;i++)
	{
	printf("enter the emp-no,emp-name,adress and emp-age ofemploye : ");
	scanf("%d%s%s%d",&e1[i].empno,e1[i].empname,e1[i].address,&e1[i].empage);
	
	}

	for( i=1;i<=2;i++)
	{
	printf("%d %s %s %d\n",e1[i].empno,e1[i].empname,e1[i].address,e1[i].empage);
	}

	
}