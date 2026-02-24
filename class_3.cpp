#include <iostream>
using namespace std;
class rectangle
{
    float length;
    float breadth;

public:
    void input_detail()
    {
        cout << "Enter the length and breadth of rectangle:";
        cin >> length >> breadth;
    }
    void display()
    {
        cout << "\nLength:" << length;
        cout << "\nBreadth:" << breadth;
        cout << "\nArea of rectangle:" << length * breadth;
        cout << "\nPerimeter of rectangle:" << 2 * (length + breadth);
    }
};
int main()
{
    rectangle r1;
    r1.input_detail();
    r1.display();
    return 0;
}
