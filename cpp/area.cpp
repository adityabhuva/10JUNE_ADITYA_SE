#include<iostream>
using namespace std;
float pi=3.141;
void add(int a,int b,int c,int d,int e)
{
	cout<<" area of circle= "<<(a*a*pi)<<endl;
	cout<<" area of rectangli = "<<(b*c)<<endl;
	cout<<" area of triangle = "<<(0.5*d*e)<<endl;
	
}

int main()
{

	add(2,5,5,6,7);
}
