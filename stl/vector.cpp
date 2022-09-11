#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4};

    v.push_back(10);
    v.push_back(12);

    for (int i : v)
        cout << i << " ";

    return 0;
}