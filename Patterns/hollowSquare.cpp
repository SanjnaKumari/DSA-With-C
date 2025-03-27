#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Hollow Square of size " << n << " is:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

}
