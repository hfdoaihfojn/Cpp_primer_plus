#include <iostream>

using namespace std;

int main(void)
{
    void func_1(double);
    double Celsius;
    cin >> Celsius;
    func_1(Celsius);
}

void func_1(double Celsius)
{
    cout << "Please enter the Celsius value: " << Celsius << endl ;
    double Fahrenheit;
    Fahrenheit = 1.8 * Celsius + 32.0;
    cout << Celsius << " degrees Celsius is " << Fahrenheit << " degrees Fahrenheit.";
}