#include <iostream>
using namespace std;

int main()
{
    int i,x,temp1,temp2;
    int max =0;
    int min=100;
    cout<<"enter the size : ";
    cin>>x;
    int arr[x];
    for(i=0;i<x;i++)
    {
        cout<<" : ";
        cin>>arr[i];
        if(arr[i]<min)
        {
            min = arr[i];
            temp1 = i;
        }
    }
    if(temp1 == x-1)
    {
        cout<<0<<endl;
        return 0;
    }
    for(i=temp1;i<x;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<max-min<<endl;
}