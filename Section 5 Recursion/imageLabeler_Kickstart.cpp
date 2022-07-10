#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0, m = 0;
        cin >> n >> m;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[n];
        }
        int successMetric = 0;
        successMetric = (A[0] + A[1]) / 2 + A[2];
        cout << successMetric;
    }

    return 0;
}