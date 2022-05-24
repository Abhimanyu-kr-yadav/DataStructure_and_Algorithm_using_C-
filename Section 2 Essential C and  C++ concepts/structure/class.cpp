#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Non-Parameterized Constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // Parameterized Constructor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    // Facilitator function
    int area() { return length * breadth; }
    int perimeter() { return 2 * (length + breadth); }

    // mutator function
    void setLength(int l) { length = l; }
    void setBreadth(int b) { breadth = b; }

    // accessor function
    int getLength() { return length; }
    int getBreadth() { return breadth; }

    // Destructor
    ~Rectangle()
    {
        cout << "Destructor";
    }
};

int main()
{
    Rectangle r(10, 5);

    cout << "Area : " << r.area() << endl;
    cout << "Perimeter : " << r.perimeter() << endl;

    return 0;
}