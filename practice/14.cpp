//completed
#include <iostream>
using namespace std;

int main()
{
    long l;
    int i,temp;
    cin>>l;
    cin>>i;
    while(i!=0)
    {
        temp = l%10;
        if(temp != 0)
        l--;
        else
        l =l/10;
        i--;
    }
    cout<<l<<endl;
}