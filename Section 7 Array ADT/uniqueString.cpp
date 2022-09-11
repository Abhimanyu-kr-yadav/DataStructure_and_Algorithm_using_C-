#include <bits/stdc++.h>
using namespace std;

int cntDistinct(string str)
{

    unordered_set<char> s;

    for (int i = 0; i < str.size(); i++)
    {

        s.insert(str[i]);
    }

    return s.size();
}

int main()
{
    string str;
    cin >> str;
    cout << cntDistinct(str);

    return 0;
}