#include<iostream>
using namespace std;
	
		char a[20],b[20];
		int c,d;
		float e;
class school
{
	public:
		 school()
		 {
		 	cout<<"Enter name: ";
		 	cin>>a;
		 	cout<<"Enter age: ";
		 	cin>>c;
		 }
};
class stu
{
	public:
		stu()
		{
			cout<<"Enter percentage:";
			cin>>e;
		}
};
class teacher:public school,public stu
{
	public:
		teacher()
		{
			cout<<"Enter teacher name :";
			cin>>b;
			cout<<"Enter teacher salary :";
			cin>>d;
		}
	
};
int main()
{
	teacher t;

}
