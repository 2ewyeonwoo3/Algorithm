#include <iostream>
#include <string>
using namespace std;

int main() {
    int y,m,d;

    string a = "-";

    cin >> y;
    cin.get();
    cin >> m;
    cin.get();
    cin >> d;

    cout << m <<a << d <<a << y;

    return 0;
}