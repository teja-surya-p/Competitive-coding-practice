//completed
#include <iostream>
using namespace std;

void summands(int x)
{
    // cout<<"value of x : "<<x<<endl;
    int arr[10];
    int i=0;
    int j;
    int s=1;
    int m=0;
    while(x>0)
    {
        arr[i] = x%10;
        i++;
        x = x/10;
    }
    for(j=0;j<i;j++)
    {
        arr[j] = arr[j]*s;
        s *= 10;
        if(arr[j]==0)
        continue;
        else
        m++;
    }
    // cout<<"i : "<<i<<endl;
    cout<<m<<endl;
    for(j=i-1;j>=0;j--)
    {
        if(arr[j] == 0)
        continue;
        else
        cout<<arr[j]<<" ";
        // break;
    }
    cout<<endl;
}

int main()
{
    int x,i,j;
    cin>>x;
    // summands(x);
    int arr[x];
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    system("clear");
    for(i=0;i<x;i++)
    {
        summands(arr[i]);
    }
}
// 5
// 5009
// 7
// 9876
// 10000
// 10
