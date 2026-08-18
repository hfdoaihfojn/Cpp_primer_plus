#include<iostream>

int main(void)
{
    using namespace std;

    char ch = 'M';
    int i = ch;  // ch明明是字符，为什么可以赋值给整形？ 原因：因为char型就是一种特殊的整形，赋给的值就是M对应的ASCII码
    cout << "The ASCII code for " << ch << " is: " << i  << endl;

    ch = ch + 1; // 当char型和int型相加时，char型变量的值就是对应的ASCII码，这里M：77
    i = ch;
    cout << "The ASCII code for " << ch << " is: " << i  << endl;

    cout << "Here displaying the cout.put(ch):" << endl;
    cout.put(ch);
    cout.put('!');

    return 0;
}