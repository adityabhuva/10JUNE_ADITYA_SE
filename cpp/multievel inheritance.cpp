#include<iostream>
using namespace std;
		
		int a,b,c,roll,mark_1,mark_2,mark1,mark2,t;
class students
{
	public:
		 Batch_1()
		 {
		 	cout<<"Enter students name: ";
		 	cin>>a>>b;
		 }
};
class Batch_2:public students
{
	public:
		Batch_2()
		{
			cout<<"Enter roll number:"<<endl;
			cin>>roll;
		}
};
class Batch_3:public Batch_2
{
	public:
		Batch_3()
		{
			cout<<" Enter 1__students mark:"<<endl;
			cin>>mark_1>>mark_2;
			cout<<mark1<<mark_1+mark_2;
			cout<<t<<mark1/2;
		//	cout<<"1__students"<<Batch_2.Batch_3(t);
			
			cout<<" Enter 2_students mark:";
			cin>>mark_1>>mark_2;
			cout<<mark2<<mark_1+mark_2;
			cout<<t<<mark2/2;
		//	cout<<"2__students"<<Batch_3.Batch_3(t);
			
		}
	
};
int main()
{
	Batch_3 b1;

	b1.Batch_1();
	
	return 0;
	

}

