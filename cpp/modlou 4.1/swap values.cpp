#include<iostream>
using namespace std;
template<class T>
void swap_numbers(T& a,T& b)
{
   	 	a=a+b;
	    b=a-b;
	    a=a-b;
}
int main()
{
    int a,b;
    cout<<"Enter thee two values : ";
    cin>>a>>b;
    swap_numbers(a,b);
    cout<<"value of a : "<<a<<endl;
    cout<<"value of b : "<<b<<endl;
}
