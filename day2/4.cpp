#include <iostream>
using namespace std;

int main()
{
    int x,i,j,k;
    cout<<"enter size : ";
    cin>>x;
    int arr[x];
    for(i=0;i<x;i++)
    {
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
    }

    int count = 0;
    for(i=0;i<x-1;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                k=arr[i];
                break;
            }
        }
    }
    cout<<k;
}