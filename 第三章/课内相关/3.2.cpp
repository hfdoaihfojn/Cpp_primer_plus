#include <iostream>
#include <climits>
#define ZERO 0

int main(void)
{
    using namespace std;

    short sam = SHRT_MAX;
    unsigned short sam_1 = USHRT_MAX;
    cout << sam << " " << sam_1 << endl ;
    
    sam = sam + 1;
    sam_1 = sam_1 + 1;
    cout << sam << " " << sam_1 << endl ; 

    sam = ZERO;
    sam_1 = ZERO;
    sam = sam - 1;
    sam_1 = sam_1 - 1;
    cout << sam << " " << sam_1;

    return 0;
}