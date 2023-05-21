//completed
#include <iostream>
using namespace std;

int main()
{
    int x,i;
    cin>>x;
    int arr[x];
    int brr[x];
    for(i=0;i<x;i++)
    {
        cin>>arr[i]>>brr[i];
    }
    int sum = 0;
    int max = 0;
    for(i=0;i<x;i++)
    {
        sum = sum + brr[i];
        sum = sum-arr[i];
        if(sum>max)
        max = sum;
    }
    cout<<max<<endl;
}