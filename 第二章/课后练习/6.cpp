#include <iostream>

int main(void)
{
    using namespace std;

    double func_1(double);
    double light_years;
    cout << "Enter the number of light years: ";
    cin >> light_years;
    cout << light_years <<endl ;
    double units;
    units = func_1(light_years);
    cout << light_years << " light years = " << units << " astronomical units.";

    return 0;
}

double func_1(double light_years)
{
    return light_years * 63240;
}