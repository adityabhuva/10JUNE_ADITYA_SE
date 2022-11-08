#include<iostream>
using namespace std;
		
		
class student
{
	public:
	int roll,mark_1,mark_2,t;
	string a;
		 int Batch_1()
		 {
		 	cout<<"Enter students name: ";
		 	cin>>a;
            cout<<"Enter roll number:"<<endl;
			cin>>roll;
			return 0;
		 }
};
class score :public student
{
	public:
	int	Batch_2()
		{
		    
			cout<<"Enter 1st subject mark:"<<endl;
			cin>>mark_1;
			cout<<"Enter 2st subject mark:"<<endl;
			cin>>mark_2;
			return 0;
		}
};
class result:public score
{
	public:
		int Batch_3()
		{
		   t =	mark_1+mark_2;
		   cout<<"Total of two subject is : "<<t;
		    return 0;
		}
	
};
int main()
{
	result b1;
	b1.Batch_1();
	b1.Batch_2();
	b1.Batch_3();

	
	return 0;
	

}
