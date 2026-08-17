#include <iostream>
#include <cmath>

int main(void)
{
    using namespace std;

    double area;
    double side;
    cout << "How much area is your room in square feet?" <<endl;
    cin >> area;
    cout << "It is " << area << endl ;
    side = sqrt(area);
    cout << "And its side is " << side ;

    return 0;
}