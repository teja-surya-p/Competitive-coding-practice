#include <iostream>
using namespace std;

int main()
{
    int x,y,i;
    cout<<"enter the size of two arrays  : "; 
    cin>>x>>y;
    int arr[x];
    int brr[y];
    for(int i=0;i<x;i++)
    {
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
    }
    for(i=0;i<y;i++)
    {
        cout<<"brr["<<i<<"] : ";
        cin>>brr[i];
    }
    i=0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int crr[x];
    int drr[y];

    while(i != x)
    {
        if(arr[count1]<brr[count2])
        {
            cout<<"crr["<<count3<<"]     is equal to    arr["<<count1<<"] : "<<arr[count1]<<endl;
            crr[count3] = arr[count1];
            count1++;
            count3++;
        }
        else
        {
            cout<<"crr["<<count3<<"]     is equal to    brr["<<count2<<"] : "<<brr[count2]<<endl;
            crr[count3] = brr[count2];
            count2++;
            count3++;
        }
        i++;
    }
    i=0;
    count3 = 0;
    while(i != y)
    {
        if(arr[count1]<brr[count2])
        {
            cout<<"drr["<<count3<<"]     is equal to    arr["<<count1<<"] : "<<arr[count1]<<endl;
            drr[count3] = arr[count1];
            count1++;
            count3++;
        }
        else
        {
            cout<<"drr["<<count3<<"]     is equal to    brr["<<count2<<"] : "<<brr[count2]<<endl;
            drr[count3] = brr[count2];
            count2++;
            count3++;
        }
        i++;
    }

    for(i=0;i<x;i++)
    {
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<y;i++)
    {
        cout<<drr[i]<<" ";
    }
    cout<<brr[count3];
    cout<<endl;
}