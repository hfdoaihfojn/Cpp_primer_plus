#include<iostream>

int main(void)
{
    using namespace std;

    const int ARsize = 20;
    char name[ARsize];
    char dessert[ARsize];
    cout << "Enter your name: \n";
    cin.getline(name,ARsize);
    cout << "Enter your favorite dessert: \n";
    cin.getline(dessert,ARsize);
    

    return 0;
}