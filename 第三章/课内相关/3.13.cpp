#include <iostream>

int main(void)
{
    using namespace std;

    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tree = 3;
    cout << "tree = " << tree << endl;
    int guess(3.9832);
    cout << "guess = " << guess << endl;
    int debt = 7.2E12;
    cout << "debt = " << debt << endl;
    char ch = 'E';
    cout << "ch = " << ch<< "number = "<< int(ch) << endl;
    cout << static_cast<int>(ch) << endl;

    return 0;
}