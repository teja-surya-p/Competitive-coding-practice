//completed
#include <iostream>
using namespace std;

int main()
{
    int x,i;
    cin>>x;
    int arr[x];
    for(i=0;i<x;i++){
        cin>>arr[i];
    }
    int brr[x];
    for(i=0;i<x;i++){
        brr[i] = arr[i]%10;
    }

    
    int crr[x];
    int count = 0;
    int temp;
    for(i=0;i<x;i++){
        count = 0;
        temp = arr[i];
        while(temp > 0){
            temp = temp/10;
            count++;
        }
        crr[i] = count;
    }
    int j;
    int sum;
    for(i=0;i<x;i++){
        sum = 0;
        if(brr[i] != 1){
            for(j=brr[i]-1;j>0;j--)
            sum = sum+10;
        }

        if(crr[i] == 1)
        sum = sum+1;
        else if(crr[i] == 2)
        sum = sum+3;
        else if(crr[i] == 3)
        sum = sum+6;
        else if(crr[i] == 4)
        sum = sum+10;

        if(brr[i] == 1){
            if(crr[i] == 1)
            cout<<"1"<<endl;
            else if(crr[i] == 2)
            cout<<"3"<<endl;
            else if(crr[i] == 3)
            cout<<"6"<<endl;
            else if(crr[i] == 4)
            cout<<"10"<<endl;
        }
        else
        cout<<sum<<endl;
    }
}