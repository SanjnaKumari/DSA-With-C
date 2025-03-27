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
void invertedFullPyramid(int n){
    for (int i = 0;i<n;i++){
        for (int j = n;j>0;j--){
            if (j > n-i){
                cout << " ";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void diamond(int n){
    fullPyramid(n);
    invertedFullPyramid(n);
}

int main(){
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    diamond(n);
}
