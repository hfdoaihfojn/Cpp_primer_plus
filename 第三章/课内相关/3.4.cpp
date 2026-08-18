#include <iostream>

int main(void)
{
    using namespace std;

    int chest = 42;         // 用十进制表示
    int waist = 42;       // 用十六进制表示
    int inseam = 42;       // 用八进制表示

    cout << "chest = " << chest << endl ;
    cout << hex ; // 十六进制
    cout << "waist = " << waist << endl ;
    cout << oct ; // 八进制
    cout << "inseam = " << inseam << endl ;

    int a = 0x42;
    cout << hex ;
    cout << a ;

    return 0;
}