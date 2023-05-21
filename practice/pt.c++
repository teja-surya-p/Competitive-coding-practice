#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {1,2,3,4,5};
    // int min = arr[0];
    // int max = arr[0];
    // for(int i=1;i<5;i++)
    // {
    //     if(max < arr[i])
    //     max = arr[i];
    //     if(min > arr[i])
    //     min = arr[i];
    // }
    // cout<<min<<" "<<max;

    // int arr[] = {3, 1, 2, 5, 4};
    // int temp = 0;
    // for (int i = 0; i < 5; i++)
    // for (int j = 0; j < 4; j++)
    // if (arr[j] > arr[j + 1])
    // {
    //     temp = arr[j];
    //     arr[j] = arr[j + 1];
    //     arr[j + 1] = temp;
    // }
    // cout<<arr[4]<<" ";
    // int i=0;
    // while(arr[4] == arr[4-i])
    // i++;
    // cout<<arr[4-i];

    // int arr[] = {3, 1, 2, 4, 4, 3, 1, 5, 7};
    // int brr[9];
    // brr[0] = arr[0];
    // int k = 1, count = 0;
    // for (int i = 1; i < 9; i++)
    // {
    //     count = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (arr[i] == brr[j])
    //             count++;
    //     }
    //     if (count == 0)
    //     {
    //         brr[k] = arr[i];
    //         k++;
    //     }
    // }

    // for (int i = 0; i < k; i++)
    //     cout << brr[i] << " ";




    // int arr[] = {1,2,3,4,5};
    // int brr[5];
    // int j=0;
    // for(int i=4;i>=0;i--)
    // {
    //     brr[j] = arr[i];
    //     j++;
    // }
    // for(int i=0;i<5;i++)
    // cout<<brr[i]<<" ";




    int a=1,b=1;
    int sum = 0;
    int c;
    cin>>c;
    do{
        sum=sum+a+b;
        cin>>c;
    }while(c!=0);
    cout<<sum;




    
    return 0;
}