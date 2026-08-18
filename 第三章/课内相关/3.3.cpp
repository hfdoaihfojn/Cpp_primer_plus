#include <iostream>

int main(void)
{
    using namespace std;

    int chest = 42;         // 用十进制
    int waist = 0x42;       // 用十六进制
    int inseam = 042;       // 用八进制

    cout << "chest = " << chest << endl ;
    cout << "waist = " << waist << endl ;
    cout << "inseam = " << inseam << endl ;

    return 0;
}