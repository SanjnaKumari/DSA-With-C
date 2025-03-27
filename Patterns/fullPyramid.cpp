#include <iostream>
using namespace std;

void fullPyramid(int n){
    for (int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            if (j < n-i-1){
                cout << " ";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    fullPyramid(n);
}
