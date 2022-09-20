#include<iostream>
using namespace std;
class  calculator
{
	  int num_1,num_2;
        public:
        calculator()
    {
                
  
    cout<<"Enter 1 Number : ";
    cin>>num_1;
    cout<<"Enter 2 number : ";
    cin>>num_2;
    }
	void display()
	{
		 cout<<"sum ="<<num_1+num_2<<endl;
   		 cout<<"mul ="<<num_1*num_2<<endl;
   		 cout<<"sub ="<<num_1-num_2<<endl;
   		 cout<<"div ="<<num_1/num_2<<endl;
   		 cout<<"module ="<<num_1%num_2<<endl;
		
	}
};
int main()
{
     calculator c1;
     c1.display();     
}
