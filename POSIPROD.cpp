#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            cout << "-1";
            return 0;
        }
        else if (x > 0) dem ++;
    }
    cout << min(dem, n - dem);
    return 0;
}
