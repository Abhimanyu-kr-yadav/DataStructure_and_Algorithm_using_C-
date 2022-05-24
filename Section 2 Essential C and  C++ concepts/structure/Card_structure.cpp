#include <bits/stdc++.h>
using namespace std;

struct Card
{
    int face;  // A(1),2,3,4,5,6,7,8,9,10,J(11),Q(12),K(13)
    int shape; // club(0), spade(1), Diamond(2), heart(3)
    int color; // Black(0), Red(1)
};

int main()
{

    Card c1 = {12, 3, 1};

    for (int i = 1; i <= 13; i++)
    {
        if (c1.face == i)
        {

            if (c1.color == 0)
            {
                switch (c1.shape)
                {
                case 0:
                    cout << i << " Black Club";
                    break;
                case 1:
                    cout << i << " Black Spade";
                    break;
                case 2:
                    cout << i << " Black Diamond";
                    break;
                case 3:
                    cout << i << " Black Heart";
                }
            }
            else
            {
                switch (c1.shape)
                {
                case 0:
                    cout << i << " Red Club";
                    break;
                case 1:
                    cout << i << " Red Spade";
                    break;
                case 2:
                    cout << i << " Red Diamond";
                    break;
                case 3:
                    cout << i << " Red Heart";
                }
            }
        }
    }

    return 0;
}
