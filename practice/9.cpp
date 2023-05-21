// #include <iostream>
// using namespace std;

// int main()
// {
//     int x,i,j;
//     cin>>x;
//     int arr[x];
//     int m,n;
//     int count = 0;
//     for(i=0;i<x;i++)
//     {
//         cin>>arr[i];
//     }
//     if(x == 2 && arr[i]<arr[i+1])
//     {
//         cout<<1<<endl;
//         return 0;
//     }
//     int min = arr[0];
//     for(i=1;i<x;i++)
//     {
//         if(arr[i] == min)
//         {
//             min = arr[i];
//             m=i;
//         }
//         else if(arr[i]<min)
//         {
//             min = arr[i];
//             m=i;
//         }
//     }
//     int temp;
//     while(arr[x-1] != min)
//     {
//         temp = arr[m];
//         arr[m] = arr[m+1];
//         arr[m+1] = temp;
//         m++;
//         count++;
//     }
//     int max = arr[0];
//     for(i=1;i<x;i++)
//     {
//         if(arr[i] == max)
//         {
//             max = arr[i];
//             n=i;
//         }
//         else if(arr[i]>max)
//         {
//             max = arr[i];
//             n=i;
//         }
//     }
//     while(arr[0] != max)
//     {
//             temp = arr[n-1];
//             arr[n-1] = arr[n];
//             arr[n] = temp;
//             n--;
//             count++;
//             if(n==0)
//             break;
//     }
//     cout<<count<<endl;
// }
