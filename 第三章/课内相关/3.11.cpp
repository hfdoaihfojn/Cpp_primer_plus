#include <iostream>

int main(void)
{
    using namespace std;

    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout << "Integer division: 9/5 = " << 9/5 << endl;
    cout << "Floading-point division: 9.0/5.0 = " << 9.0/5.0 << endl;
    cout << "Mixed division: 9.0/5 = " << 9.0/5 << endl;
    cout << "Double constants: 1E7/9.0 = " << 1E7/9.0 << endl;
    cout << "Float constants: 1E7F/9.0F = " << 1E7F/9.0F << endl;

    return 0;
}