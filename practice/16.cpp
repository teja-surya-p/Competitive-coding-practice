//completed
#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int count = 0;
    while(x<=y)
    {
        x = x*3;
        y = y*2;
        count++;
    }
    cout<<count<<endl;
}