#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch[20],r;

	fptr=fopen("hello.txt","w");
	fprintf(fptr,"hi");
	fclose(fptr);
	fptr=fopen("hello.txt","r");
	printf("aditya patel");
	fscanf(fptr,"%s",&ch);
	fprintf(fptr,"%s",ch);
	fclose(fptr);



}
