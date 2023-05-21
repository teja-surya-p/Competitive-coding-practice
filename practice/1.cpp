//completed
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
int sum = 0;
for(i=0;i<x;i++)
{
    string s = arr[i];
    if(s[1] == '+')
    sum++;
    else
    sum--;
}
cout<<sum;
}
