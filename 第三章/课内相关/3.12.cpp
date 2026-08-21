#include <iostream>

int main(void)
{
    using namespace std;

    const int lbs_per_stn = 14;
    int lbs;
    cout << "Enter your weights: ";
    cin >> lbs;
    int stones = lbs / lbs_per_stn;
    int pounds = lbs / lbs_per_stn;

    cout << lbs << " pounds are " << stones << " stones " << pounds << "pounds\n";

    return 0;
}