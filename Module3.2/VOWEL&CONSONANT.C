#include<stdio.h>
#include<conio.h>
void main()
{
	int charter;
	clrscr();
	printf("vowel=1\nconsonantt=2");
	printf("\nEnter choich number:");
	scanf("%d",&charter);
	switch(charter)
	{
		case 1:
		printf("vowel=A,E,I,O,U");
		   break;

	       case 2:
		printf("consonant=A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z");
		   break;

	      default:
	      printf("wrong choice ");
	}
	getch();

}