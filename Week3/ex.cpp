#include <iostream>
using namespace std;

class Point{
    public:
        int x,y;
        void Print();
        Point();
};

Point::Point(){
    x=100;
    y=100;
}

void Point::Print(){
    cout << "x : " << x << "y: " << y;
}

int main(){
   Point point1;
   point1.x = 50;
   point1.Print();

   return 0;
}