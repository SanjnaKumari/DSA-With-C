#include <iostream>
using namespace std;

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
void invertedFullPyramidNew(int n){
    for (int i = 0;i<n;i++){
        //Spaces
        for (int j = 0;j<i;j++){
            cout << " ";
        }
        //Stars
        for (int j = 0;j<n-i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    invertedFullPyramid(n);

    invertedFullPyramidNew(n);
}
