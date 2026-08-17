#include <iostream>

using namespace std;

int main(void)
{
    void func_1(void);
    void func_2(void);
    
    func_1();
    func_2();

    return 0;
}

void func_1(void)
{
    cout << "Three blind mice" << endl ;
    cout << "Three blind mice" << endl ;
}

void func_2(void)
{
    cout << "See how they run" << endl ;
    cout << "See how they run" << endl ;
}

// 所以如果是自己定义的函数，在使用前也必须要先提供原型。