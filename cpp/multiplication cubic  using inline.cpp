#include<iostream>
using namespace std;
class line
{
   public:
              inline int mul(int x,int y)
              {
                            return(x*y);
              }
              inline int cube(int x)
              {
                            return(x*x*x);
              }
};

int main()
{	
	line c1;
	int num_1,num_2;
	
	cout<<"Enter 1 number :";
	cin>>num_1;
	cout<<"Enter 2 number :";
	cin>>num_2;
	cout<<endl<<"Multiplication value is="<<c1.mul(num_1,num_2);
	cout<<endl<<"cube value is="<<c1.cube(num_1);
}
