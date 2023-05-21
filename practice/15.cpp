//completed
#include <iostream>
using namespace std;

int main()
{
    int x,z;
    int i=1;
    cin>>x;
    long y;
    cin>>y;
    cin>>z;
    int sum = 0;
    // cout<<"x : "<<x<<"  y : "<<y<<"  z : "<<z<<endl;
    while(z!=0)
    {    
        sum = sum + x*i;
        i++;
        z--;
    }
    long up = sum-y;
    // cout<<"sum : "<<sum<<"  up : "<<up<<endl;
    if(up > 0)
    cout<<up<<endl;
    else
    cout<<0<<endl;
}