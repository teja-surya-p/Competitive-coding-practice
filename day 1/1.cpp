#include <iostream>
using namespace std;

int main()
{
    int i,j;
    cout<<" enter i ,j values : ";
    cin>>i>>j;

    int arr[i][j];

    int m,n,x,y;

    for(m=0;m<i;m++)
    {
        for(n=0;n<j;n++)
        {
            cout<<"arr["<<m<<"]["<<n<<"] : ";
            cin>>arr[m][n];
        }
    }

    for(m=0;m<i;m++)
    {
        for(n=0;n<j;n++)
        {
            if(arr[m][n] == 0)
            {
                for(x=0;x<i;x++)
                {
                    cout<<"arr["<<m<<"]["<<x<<"] : "<<arr[m][x]<<endl;
                    arr[m][x] = -1;
                }
                for(y=0;y<j;y++)
                {
                    cout<<"arr["<<y<<"]["<<n<<"] : "<<arr[y][n]<<" ";
                    arr[y][n] = -1;
                }
                cout<<endl;
            }
        }
    }

    for(m=0;m<i;m++)
    {
        for(n=0;n<j;n++)
        {
            if(arr[m][n] == -1)
            {
                arr[m][n] = 0;
            }
        }
    }

     for(m=0;m<i;m++)
    {
        for(n=0;n<j;n++)
        {
            cout<<arr[m][n]<<" ";
        }
        cout<<" "<<endl;
    }
}