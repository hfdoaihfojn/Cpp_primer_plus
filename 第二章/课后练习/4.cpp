#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter you age: " ;
    int age;
    cin >> age;
    cout << age << endl ;
    int months;
    months = age * 12;
    cout << "Your age in months is " << months ; 

    return 0;
}