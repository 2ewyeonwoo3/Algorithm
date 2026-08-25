#include <iostream>
using namespace std;

int main() {
    double f = 30.48;
    double m = 160934;

    cout << fixed;
    cout.precision(1);


    cout << "9.2ft = " << f*9.2 <<"cm" << endl;
    cout << "1.3mi = " << m*1.3 <<"cm";
    return 0;
}