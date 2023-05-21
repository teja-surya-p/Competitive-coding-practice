#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    string s;
    cin >> s;
    string arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int brr[n];
    for (i = 0; i < n; i++)
        brr[i] = arr[i].length();
    int sum = 0;
    for (i = 0; i < n; i++)
        sum += brr[i];
    int count = 0;
    if (sum == s.length())
    {
        for (i = 0; i < n; i++)
        {
            for (int j = 0; j < arr[i].length(); j++)
            {
                if (arr[i][j] == s[count])
                    count++;
                else
                {
                    cout<<'0';
                    return 0;
                }
            }
        }
        cout<<'1';
    }
    else
        cout << 0;
}