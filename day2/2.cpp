#include <iostream>
using namespace std;

int main()
{
    int x,y,i,j;
    int count1 = 0;
    cout<<"sizes : ";
    cin>>x>>y;
    int arr[x][y];

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<"arr["<<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
        }
    }

    cout<<"before overlapping"<<endl;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    for(i=0;i<x;i++){
        if(arr[i][1]>arr[i+1][0])
        {
            if(arr[i][1]<arr[i+1][1]){
                arr[i][1] = arr[i+1][1];
                arr[i+1][0] = arr[i+1][1] = -20;
                count1++;
            }
            else{
                arr[i+1][0] = arr[i+1][1] = -20;
                count1++;
            }
        }
    }

    cout<<"after overlapping"<<endl;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int brr[x][y];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(arr[i][j] == -20){
                continue;
            }
            else{
                brr[i][j] = arr[i][j];
            }
        }
    }

    cout<<"finally"<<endl;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(brr[i][j] == -20){
                continue;
            }
            else{
                cout<<brr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
//intervals=[[1,3],[2,6],[8,10],[15,18]]

// Output: [[1,6],[8,10],[15,18]]