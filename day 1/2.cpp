# include <iostream>
using namespace std;

int factorial(int k)
{
    int x=1;
    int i;
    for(i=1;i<=k;i++)
    {
        x=x*i;
    }
    return x;
}

int ncr(int x, int y)
{
    int k;
    k = (factorial(x)/(factorial(y) * factorial(x-y)));
    return k;
}

void find_pacsac(int k)
{
    int i;
    if(k==1)
    {
        cout<<"1 "<<endl;;
    }
    else if(k%2 == 0 )
    {
        for(i=0;i<k/2;i++)
        {
            cout<<ncr(k-1,i)<<" ";
        }
        for(i=(k/2)-1;i>=0;i--)
        {
            cout<<ncr(k-1,i)<<" ";
        }
        cout<<endl;
    }
    else 
    {
        for(i=0;i<k/2;i++)
        {
            cout<<ncr(k-1,i)<<" ";
        }
        for(i=(k/2);i>=0;i--)
        {
            cout<<ncr(k-1,i)<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int k,i;
    cout<<"enter the value : ";
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        find_pacsac(i);
    }
}