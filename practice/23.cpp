//completed
#include <iostream>
using namespace std;

int main()
{
    int x,i=1,count = 0,sum = 0,tot_sum = 0;
    cin>>x;
    while(tot_sum <= x)
    {
        sum = sum+i;
        tot_sum += sum;
        count++;
        i++;
    }
    cout<<count-1;
}