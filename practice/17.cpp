//wrong on test case 6
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,j;
    int count = 0;
    for(i=0;i<s.length()-1;i++)
    {
        for(j=i+1;j<s.length();j++)
        {
            if(s[i] == s[j])
            count++;
        }
    }
    // cout<<"count : "<<count<<endl;
    // cout<<"string length : "<<s.length()<<endl;
    count = s.length()-count;
    if(count%2 == 0)
    cout<<"CHAT WITH HER!"<<endl;
    else
    cout<<"IGNORE HIM!"<<endl;
}
//zcinitufxoldnokacdvtmdohsfdjepyfioyvclhmujiqwvmudbfjzxjfqqxjmoiyxrfsbvseawwoyynn
// IGNORE HIM!
