//completed
#include <iostream>
using namespace std;

int main()
{
    int x,i,j;
    cin>>x;
    int arr[x][3];
    for(i=0;i<x;i++)
    {
        for(j=0;j<3;j++)
        cin>>arr[i][j];
    }
    system("clear");
    i=j=0;
    int count = 0;
    int sum;
    while(i<x)
    {
        sum = 0;
        count = 0;
        while(sum <= arr[i][2])
        {
            if(arr[i][j] > arr[i][j+1])
            {
                arr[i][j+1] = arr[i][j+1] + arr[i][j];
                sum = arr[i][j+1];
                count++;
            }
            else
            {
                arr[i][j] = arr[i][j]+arr[i][j+1];
                sum = arr[i][j];
                count++;
            }
        }
        cout<<count<<endl;
        i++;
    }
}