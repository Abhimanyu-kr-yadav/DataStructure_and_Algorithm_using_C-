#include <iostream>
using namespace std;

struct Card
{
    int face;  // A,2,3,4,5,6,7,8,9,10,J,Q,K
    int shape; // club = 0, spade = 1, diamond = 2, heart = 3;
    int color; // black = 0, Red = 1;

    int getFace() { return face; }
    friend ostream &operator<<(ostream &out, Card x);
};
ostream &operator<<(ostream &out, Card x)
{
    out << "[" << x.face << " , " << x.shape << " , " << x.color << "]" << endl;
    return out;
}

int main()
{
    struct Card c1;
    struct Card c[52] = {{1, 0, 0}, {1, 1, 0}, {1, 2, 1}, {1, 3, 1}};
    c1.face = 1;
    c1.shape = 0;
    c1.color = 0;
    cout << c1.face << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << c[i];
    }

    cout << endl;
    cout << "successfully compiled" << endl;

    return 0;
}