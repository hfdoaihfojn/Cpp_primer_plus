#include<iostream>

int main(void)
{
    using namespace std;

    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamscost[3] = {20,30,5};
    cout << "Total yams is = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamscost[1] << " cents per yam\n";

    int total = yams[0] * yamscost[0] + yams[1] * yamscost[1] + yams[2] * yamscost[2];
    cout << "Total expand is : " << total << endl;

    cout << "Size of yams array = " << sizeof(yams);
    return 0;
}