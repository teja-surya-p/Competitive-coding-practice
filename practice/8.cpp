//completed
#include <iostream>
using namespace std;

int main()
{
    int x,i;
    cin>>x;
    string arr[x];
    int sum =0;
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<x;i++)
    {
        if(arr[i] == "Tetrahedron")
        sum += 4;
        else if(arr[i] == "Icosahedron")
        sum += 20;
        else if(arr[i] == "Cube")
        sum += 6;
        else if(arr[i] == "Dodecahedron")
        sum += 12;
        else if(arr[i] == "Octahedron")
        sum += 8;
    }
    cout<<sum<<endl;
}