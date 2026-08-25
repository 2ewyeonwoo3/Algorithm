#include <iostream>
using namespace std;

int main() {
    double f = 30.48;

    double N;

    cin >> N;

    cout << fixed;

    cout.precision(1);

    cout << N*f;
    return 0;
}