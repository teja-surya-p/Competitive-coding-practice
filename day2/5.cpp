#include <iostream>
using namespace std;

int main()
{
    int x,y,i,j,k;
    int count = 0;
    int counter = 0;
    cout<<"enter size and range : ";
    cin>>x>>y;
    int arr[x],brry[y],crr[x];
    for(i=0;i<=y;i++){
        brr[i] = i+1;
    }
    for(i=0;i<x;i++){
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<"brr elements"<<endl;
    for(i=0;i<y;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    cout<<"arr elements"<<endl;
    for(i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<x-1;i++){
        for(j=i+1;j<x;j++){
            if(arr[i] == arr[j]){
                crr[counter] = arr[j];
                counter++;
            }
        }
    }
    cout<<"repeating elements"<<endl;
    cout<<endl;
    for(i=0;i<counter;i++){
        cout<<crr[i]<<"     ";
    }
    cout<<endl;
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            if(arr[j] == brr[i]){
                break;
            }
        }
        if(j == x){
            crr[counter] = brr[i];
            counter++;
        }
    }
    cout<<"all elements in crr";
    for(i=0;i<counter;i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
}