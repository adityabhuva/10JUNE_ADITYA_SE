#include<stdio.h>
void main()
{
	int a,b,choice;
		printf("Enter 2 number:");
		scanf("%d%d",&a,&b);
	printf("\nadditino=1\nsubtraction=2\nmultiplication=3\ndivision=4\nmodulo=5");
		printf("\nEnter choice no=");
		scanf("%d",&choice);
		
		switch(choice)
		{
				case 1:
								printf("additino=%d",a+b);
								break;
								
				case 2:
								printf("\n\tsubtraction=%d",a-b);
								break;
									
				case 3:
								printf("\n\tmultiplication=%d",a*b);
								break;
								
				case 4:
								printf("\n\tdivision=%d",a/b);
								break;	
									
				case 5:
								printf("\n\tmodulo=%d",a%b);
								break;			
			
																										default:
																														printf("Enter valid choice");		
		}
}