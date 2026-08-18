#include <iostream>
#include <climits>

int main(void)
{
    using namespace std;

    int n_int = INT_MAX;
    cout << n_int << endl ;
    short n_short = SHRT_MAX;
    cout << n_short << endl ;
    long n_long = LONG_MAX;
    cout << n_long << endl ;
    long long n_ll = LLONG_MAX;
    cout << n_ll << endl ;
    unsigned long long n_ull = ULLONG_MAX;
    cout << n_ull << endl ;
    unsigned char n_uc = UCHAR_MAX;
    cout << n_uc << endl ;

    cout << "int is: " << sizeof(int) << " bytes." << endl ;
    cout << "long is: " << sizeof(long) << " bytes." << endl ;
    cout << "char is: " << sizeof(char) << " bytes." << endl ;
    cout << "long long is: " << sizeof(long long) << " bytes." << endl ;
    cout << "unsigned char is: " << sizeof(unsigned char) << " bytes." << endl ;

    return 0;
}