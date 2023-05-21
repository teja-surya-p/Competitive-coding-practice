//completed
#include <iostream>
using namespace std;

int main()
{
    string s,temp1;
    cin>>s;
    string arr[5];
    int i;

    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<5;i++)
    {
        temp1 = arr[i];
        if(s[0] == temp1[0] || s[0] == temp1[1] || s[1] == temp1[0] || s[1] == temp1[1])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}