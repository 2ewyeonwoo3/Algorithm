#include <iostream>
using namespace std;

int main() {

    cout << fixed;
    int w = 13;
    cout.precision(6);
    double g = 0.165;

    cout << w <<" * "<<g << " = "<<w*g;
    return 0;
}