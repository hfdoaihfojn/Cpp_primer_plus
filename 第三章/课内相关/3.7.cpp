#include<iostream>

int main(void)
{
    using namespace std;

    char alarm = '\a';
    cout << alarm ;
    cout << "Ben!" << "\"Don't do that again!\"";

    cout << "\n\aOperation \"activated\" is not availavle!\n";

    cout << "Enter your agent code:______\b\b\b\b\b\b";
    long code;
    cin >> code;

    cout << '\a' << "You entered " << code << " is verified!\n";

    cout << "yes" << "ou ye" << "haha" ;

    return 0;
}