//completed
#include <iostream>
using namespace std;
 
int main()
{
    int arr[5][5];
    int i,j,k,m,n;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 1)
            {
                m=i,n=j;
            }
        }
    }
    if(m >2)
    m=m-2;
    else
    m=2-m;
    
    if(n > 2)
    n=n-2;
    else
    n=2-n;
    cout<<m+n;
}
