//completed
#include <iostream>
using namespace std;

int main()
{
    int arr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=1;i<3;i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }
    int min = arr[0];
    for(int i=1;i<3;i++)
    {
        if(arr[i]<min)
        min = arr[i];
    }

    cout<<max-min<<endl;
}