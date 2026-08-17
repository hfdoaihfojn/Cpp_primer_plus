#include <iostream>

using namespace std;

int main(void)
{
    int hours;
    int minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    void func_1(int,int);
    func_1(hours,minutes);

    return 0;
}

void func_1(int hours,int minutes)
{
    cout << "Time:" << hours << ":" << minutes ;
}

// 给出原型的时候要加前面的返回类型（int，void之类的）
// 后面实际调用的时候就不用加了