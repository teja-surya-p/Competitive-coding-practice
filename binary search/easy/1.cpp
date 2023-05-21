#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int nb,ns,nc;
    cin>>nb,ns,nc;
    int pb,ps,pc;
    cin>>pb,ps,pc;
    long r;
    cin>>r;
    int countB=0,countS=0,countC=0;
    int i;
    int tot_b=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i] == 'b')
        countB++;
        else if(s[i] == 's')
        countS++;
        else if(s[i] == 'c')
        countC++;
    }
    
}