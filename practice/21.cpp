//not completed
#include <iostream>
using namespace std;

int main()
{
    int x,i,fin,count;
    cin>>x;
    fin = count = 0;
    int arr[x];
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<x-1;i++)
    {
        count = 0;
        while(arr[i]<arr[i+1])
        {
            // cout<<arr[i]<<" "<<arr[i+1]<<endl;
            i++;
            count++;
        }
        if(count>fin)
        fin = count;
    }
    cout<<fin+1;
}