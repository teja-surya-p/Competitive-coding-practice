#include <iostream>
using namespace std;

int main()
{
    int x,i;
    cout<<"enter the size of x : ";
    cin>>x;
    int arr[x];
    for(i=0;i<x;i++)
    {
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
    }

    if(x == 1)
    {
        cout<<arr[0]<<endl;
        return 0;
    }

    if(x == 2)
    {
        if(arr[0] > 0 && arr[1] > 0)
        {
            cout<<arr[0]<<" "<<arr[1]<<endl;
        }
        else if(arr[0] > 0)
        {
            cout<<arr[0]<<endl;
        }
        else if(arr[1] > 0)
        {
            cout<<arr[1]<<endl;
        }
        else{
            if(arr[0]>arr[1])
            {
                cout<<arr[0]<<endl;
            }
            else
            {
                cout<<arr[1]<<endl;
            }
        }
        return 0;
    }
    
    int sum = 0;
    int sum2 = 0;
    int y;
    y=x-1;
    int ind1,ind2;

    for(i=0;i<x;i++)
    {
        sum = sum+arr[i];
    }

    while(y!=0)
    {
        sum2 = 0;
        for(i=0;i<=y;i++)
        {
            sum2 = sum2+arr[i];
            if(sum2>sum)
            {
                sum=sum2;
                ind1 = i;
                ind2 = y;
            }
        }
        for(i=y;i>=0;i--)
        {
            sum2 = sum2+arr[i];
            if(sum2>sum)
            {
                sum=sum2;
                ind1 = i;
                ind2 = y;
            }
        }
        y--;
    }
    cout<<"ind1 : "<<ind1<<"      ind2 : "<<ind2<<endl;
    for(i=ind1;i<=ind2;i++)
    {
        cout<<arr[i]<<" ";
    }
}
// input1 : -2,1,-3,4,-1,2,1,-5,4
// input2 : 1