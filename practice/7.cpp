//completed
#include <iostream>
using namespace std;

int main()
{
    int x,y,i,j;
    cin>>x>>y;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if((i+1)%2 == 0 )
            {
                if((i+1)%4 == 0 )
                {
                    if(j != 0)
                    cout<<".";
                    else
                    cout<<"#";
                }
                else
                {
                    if(j != y-1)
                    cout<<".";
                    else
                    cout<<"#";
                }
            }
            else
            cout<<"#";
        }
        cout<<endl;
    }
}