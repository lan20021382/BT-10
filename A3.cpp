#include<iostream>
using namespace std;

struct Point{
    double x,y;
    Point(){};
    Point(double _x, double _y): x(_x), y(_y){};
};

void print(const Point& p){
    cout <<"("<<p.x<<","<<p.y<<")"<<endl;
}
Point mid_point( const Point& a, const Point& b){
    Point mid;
    mid.x=(a.x+b.x)/2;
    mid.y=(a.y+b.y)/2;
    return mid;
}

int main(){
    Point a(5,7);
    Point b(8,9);
    Point c=mid_point(a,b);
    print(c);
    return 0;
}
