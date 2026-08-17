#include<iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "How many carrots you have ?" << endl ;
    cin >> carrots;
    cout << "I have " << carrots << " carrots ." << endl;
    carrots = carrots + 2;
    cout << "Now,you have two more!" 
    << endl 
    << "So now you have " 
    << carrots 
    << "carrots !";

    return 0;
    
}