#include <iostream>

int main(void)
{
    using namespace std;

    int auks,bats,coots;
    auks = 19.99 + 11.99;
    cout << "auks = " << auks << endl;
    bats = (int)19.99 + (int) 11.99 ;
    cout <<"bats = " << bats << endl;
    coots = int(19.99) + int (11.99) ;
    cout <<"coots = " << coots << endl;

    return 0;
}