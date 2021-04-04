#include <iostream>
using namespace std;
struct Point
{
    double x, y;
    Point(){};
    Point(double _x, double _y) {x=_x, y=_y;};
};
int main()
{
    Point a(6,8);
    cout << &a << endl << &a.x << endl << &a.y;
    return 0;
}
