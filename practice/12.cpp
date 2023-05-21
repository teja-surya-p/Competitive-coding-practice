//semi completed
#include <iostream>
using namespace std;

int div(long x)
{
    
    int count = 0;
    int temp;
    while(x > 0)
    {
        temp = x%10;
        if(temp == 4 || temp == 7)
        count++;
        x = x/10;
    }
    if(count == 4 || count == 7)
    return 1;
    else
    return -1;
}

int main()
{
    long c;
    cin>>c;

    int x = div(c);
    if(x == -1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
//