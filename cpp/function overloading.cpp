#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<"Additino = "<<(a+b)<<endl;
	cout<<"Subtraction = "<<(a-b)<<endl;
	cout<<"Multiplication = "<<(a*b)<<endl;
	
}
void addd(float a,float b)
{
	cout<<"Division = "<<(a/b)<<endl;
}
int main()
{

	add(52,4);
	addd(34,5);
}
