#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,avg;
    cout<<"enter size "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter no."<<endl;
        cin>>arr[i];
        sum=sum+arr[i];

    }
     avg=sum/n;
     cout<<sum<<endl;
     cout<<avg;
}

