#include<iostream>
using namespace std;
class swape{
    int a, b;
    public:
    friend int values(swape frnd);
};
int values(swape frnd)
{
    cout<<"Enter value of a:"<<endl;
    cin>>frnd.a;
    cout<<"Enter value of b:"<<endl;
    cin>>frnd.b;
    frnd.a = frnd.a+frnd.b;
    frnd.b = frnd.a-frnd.b;
    frnd.a = frnd.a-frnd.b;
    cout<<"Enter value of a:"<<frnd.a<<endl;
    cout<<"Enter value of b:"<<frnd.b<<endl;
    return 0;
    
}
int main() {
       swape obj;
       values(obj);
       return 0;
}
