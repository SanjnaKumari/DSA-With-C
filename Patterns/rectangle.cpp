#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Rectangle of size " << n << " is:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n*2; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}