#include <iostream>
using namespace std;

int main()
{
    int x,i;
    int a=0;
    int b=0;
    int c=0;
    cout<<" : ";
    cin>>x;
    int arr[x];
    for(i=0;i<x;i++)
    {
        cout<<" : ";
        cin>>arr[i];
        if(arr[i] == 0)
            a++;
        else if(arr[i] == 1)
            b++;
        else if(arr[i] == 2)
            c++;
    }
    cout<<"a : "<<a<<"  b : "<<b<<"  c : "<<c<<endl;
    int k=0;
    for(i=0;i<a;i++)
    {
        arr[k] = 0;
        cout<<"0 K : "<<k<<endl;
        k++;
    }
    for(i=0;i<b;i++)
    {
        arr[k] = 1;
        cout<<"1 K : "<<k<<endl;
        k++;
    }
    for(i=0;i<c;i++)
    {
        arr[k] = 2;
        cout<<"2 K : "<<k<<endl;
        k++;
    }
    for(i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}