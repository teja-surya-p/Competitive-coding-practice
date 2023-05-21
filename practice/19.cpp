//completed
#include <iostream>
using namespace std;

int main()
{
    string s;
    int i,j,count1,count2,count3;
    cin>>s;
    count1 = count2 = count3 = 0;
    for(i=0;i<s.length();i++)
    {
        if(s[i] == '1')
        count1++;
        else if(s[i] == '2')
        count2++;
        else if(s[i] == '3')
        count3++;
    }
    i=0;
    while(count1 !=0)
    {
        s[i] = '1';
        s[i+1] = '+';
        i+=2;
        count1--;
    }
    while(count2 != 0)
    {
        s[i] = '2';
        s[i+1] = '+';
        i+=2;
        count2--;
    }
    while(count3 != 0)
    {
        s[i] = '3';
        if(i == s.length()-1)
        {
            cout<<s<<endl;
            return 0;
        }
        s[i+1] = '+';
        i+=2;
        count3--;
    }
    cout<<s<<endl;
}