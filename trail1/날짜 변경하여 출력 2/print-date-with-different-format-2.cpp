#include <iostream>
#include <string>
using namespace std;

int main() {
    int y, m,d;
    string a = ".";

    cin >> m; 
    cin.get();
    cin >> d;
    cin.get();
    cin >> y;

    cout << y <<a<<m<<a<<d;
    return 0;
}