#include<iostream>
using namespace std;
class cricketer
{
	public:
		int a,b;
		public:
			cricketer()
		{
			
			cout<<"=========: shikhar dhawan :========="<<endl;
			a=5355;
			b=1000;
			cout<<endl<<"totle runs in all matches :"<<a<<endl;
			cout<<"totle wickets in all matches :"<<b<<endl;
		}
};
class run : public cricketer
{
	public:
		run()
		{
			cout<<"Average run in all matches :"<<a/2<<endl;
			cout<<"average wickets in all matches :"<<b/2<<endl;
		}
};
int main()
{
	run c1;
}



