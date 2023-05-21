//completed
#include <iostream>
using namespace std;

int main()
{
    int x,i;
    cout<<"enter the size : ";
    cin>>x;
    int arr[x];
    for(i=0;i<x;i++)
    {
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
    }
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for(i=0;i<x;i++)
    {
        if(arr[i] == 0)
        count0++;
        else if(arr[i] == 1)
        count1++;
        else
        count2++;
    }
    i=0;
    while(count0 != 0)
    {
        arr[i] = 0;
        i++;
        count0--;
    }
    while(count1 != 0)
    {
        arr[i] = 1;
        i++;
        count1--;
    }
    while(count2 != 0)
    {
        arr[i] = 2;
        i++;
        count2--;
    }
    for(i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}