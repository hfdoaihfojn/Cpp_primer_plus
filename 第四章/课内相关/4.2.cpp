#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    const int size = 15;
    char name1[size];
    char name2[size] = "c++owboy";
    cout << "Howdy!I'm " << name2 << endl;
    cout << "What's your name?\n";
    cin >> name1;
    cout << "Hi " << name2 << ".My name is : " << name1 << endl ;
    cout << "And my name has " << strlen(name1) << " letters.Which is stored" ;
    cout << "in an array of " << sizeof(name1) << " bytes.";

    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 <<endl;

    return 0;
}