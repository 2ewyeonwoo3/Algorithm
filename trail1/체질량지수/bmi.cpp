#include <iostream>
using namespace std;

int main() {
    
    int h,w;

    int b;

    cin >> h >> w;

    b = (double)w/(((double)h/100)*((double)h/100));

    cout << b << endl;

    if(  b >= 25 ){
        cout << "Obesity";
    }



    return 0;
}