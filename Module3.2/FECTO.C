#include<stdio.h>
#include<conio.h>
long int fecto(int a){

      if(a<=1)
      return 1;
      return a*fecto(a-1);

}
  void main()
{
	 int a;
	clrscr();

	printf("Enter Number:");
	scanf("%d",&a);
	printf("%ld",fecto(a));
	getch();

}