#include <iostream>

int main(void)
{
    using namespace std;

    cout.setf(ios_base :: fixed,ios_base :: floatfield);
    float tub = 10.0 / 3.0;
    cout << "tub= " << tub << endl;
    const float million = 1.0E+6;
    cout << "a million tubs = " << million * tub << endl;
    cout << 10 * million * tub << endl;
    double mint = 10.0 / 3.0;
    cout << "tub = " << mint << endl;
    cout << "a million mints = " << million * mint << endl;

    return 0;
}