#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    string s;

    cin >> score;

    s = score == 100 ? "pass" :"failure";

    cout << s;
    return 0;
}