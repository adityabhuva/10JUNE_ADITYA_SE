#include<stdio.h>
int main()
{
	int i,j,c,b[2][2],a[2][2],sum[10][10],sub[10][10],mul[10][10];
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("Enter the 1 matrixs :");
			scanf("%d",&a[i][j]);
		}

	}
		for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("Enter the 2 matrixs :");
			scanf("%d",&b[i][j]);
		}

	}
    printf("-------------------------------\n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("sum:");
			printf("%d\t",sum[i][j]);
			
		}
		printf("\n");
	
	}
	printf("-------------------------------\n");
		for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
			printf("sub:");
			printf("%d\t",sub[i][j]);
			
		}
		printf("\n");
		
	
	}
		printf("-------------------------------\n");

		for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			mul[i][j]=a[i][j]*b[i][j];
			printf("mul:");
			printf("%d\t",mul[i][j]);
			
		}
		printf("\n");
		
	}
	printf("-------------------------------\n");

	
}