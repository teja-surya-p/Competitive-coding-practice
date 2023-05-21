
#include <iostream>
using namespace std;

int main()
{
    int x, i;
    cin >> x;
    char arr[x];
    for (i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    i = 1;
    int sum = 1;
    while (sum <= x)
    {
        cout << arr[sum - 1];
        i++;
        sum += i;
    }
}