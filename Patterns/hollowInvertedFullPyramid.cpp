#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    for (int i = 0;i<n;i++){
        for (int j = 0;j<i;j++){
            cout << " ";
        }
        for (int j = 0;j< n-i;j++){
            if (i == 0 || i == n-1 || j ==0 || j == n-i-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

}