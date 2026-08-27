#include <iostream>
using namespace std;

int main() {
    int cost;

    cin >> cost;

    if (cost >=3000){
        cout << "book";
    }
    else if (cost >= 1000){
        cout << "mask";
    }
    else if (cost >= 500){
        cout << "pen";
    }
    else cout << "no";
    return 0;
}