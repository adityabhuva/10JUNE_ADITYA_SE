#include<iostream>
using namespace std;
template<class T>
void sort_numbers(T arr[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j-1])
            {
                T t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
            }
        }
    }
};
template<class T>
void printnumber(T arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = {12,56,33,77,24,11,9,2,6};
    int n=sizeof(arr)/sizeof(int);
    cout<<"array before sort: "<<endl;
    printnumber(arr,n);
    sort_numbers(arr,n);
    cout<<"\n";
    cout<<"array after sort : "<<endl;
    printnumber(arr,n);
}
