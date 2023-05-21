#include <iostream>
using namespace std;

int main()
{
    int m,n,i;
    cout<<" : ";
    cin>>m>>n;
    int arr[20];
    for(i=0;i<20;i++)
    {
        arr[i] = i+1;
    }

    for(i=0;i<20;i++)
    {
        int sum = 1;
        for(int j=0;j<m;j++)
        {
            sum = sum*arr[i];
        }

        if(sum == n)
        {
            cout<<arr[i];
        }
    }
}