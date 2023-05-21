//completed
#include <iostream>
using namespace std;
int main()
{
    int x,i;
    cin>>x;
    int arr[x];
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<x;i++)
    {
        if(i == x-1 && arr[i] != 1)
        cout<<"EASY"<<endl;
        if(arr[i] == 1)
        {
            cout<<"HARD"<<endl;
            break;
        }
    }
}