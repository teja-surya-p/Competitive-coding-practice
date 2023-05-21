#include <iostream>
using namespace std;

int main()
{
    int x,i,j,m,n;
    cout<<"enter size : ";
    cin>>x;
    int arr[x][x];

    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
        {
            cout<<"arr["<<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
        }
    }

    int brr[x][x];
    for(i=x-1;i>=0;i--)
    {
        for(j=0;j<x;j++)
        {
            brr[j][i] = arr[i][j];
        }
        cout<<endl;
    }

    for(i=0;i<x;i++)
    {
        for(j=x-1;j>=0;j--)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}