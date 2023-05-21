#include <iostream>
using namespace std;

int main()
{
    int x,i;
    cin>>x;
    string arr[x];
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int brr[x];
    string temp;
    int j;
    for(i=0;i<x;i++)
    {
        temp = arr[i];
        for(j=0;j<temp.length();j++)
        {
            if(temp[j] == '1')
            break;
        }
        brr[i] = j;
    }
    int count = 0;
    int crr[x];
    int drr[x];
    for(i=0;i<x;i++)
    {
        count = 0;
        temp = arr[i];
        for(j=brr[i];j<temp.length();j++)
        {
            if(temp[j] == '0')
            count++;
        }
        crr[i] = count;
    }
    for(i=0;i<x;i++)
    {
        count = 0;
        temp = arr[i];
        for(j=temp.length();j>=0;j--)
        {
            if(temp.length() == 1 && temp[0] == '0')
            {
                count = -1;
            }
            if(temp[temp.length()] == '1')
            {
                break;
            }
            else
            {
                if(temp[j] == '1')
                {
                    break;
                }
                else{
                    if(temp[j] == '0')
                    {
                        count++;
                    }
                }
            }
        }
        drr[i] = count;
    }

    for(i=0;i<x;i++)
    cout<<crr[i]-drr[i]<<endl;
}
// 3
// 010011
// 0
// 1111000
