#include <iostream>
using namespace std;

void hollowFullPyramid(int n){
    for (int i = 0;i<n;i++){
        for (int j = 0;j<n-i-1;j++){
            cout << " ";
        }
        for (int j = 0;j< i+1;j++){
            if (i == 0 || j ==0 || j == i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

}
void hollowInvertedFullPyramid(int n){
    for (int i = 0;i<n;i++){
        for (int j = 0;j<i;j++){
            cout << " ";
        }
        for (int j = 0;j< n-i;j++){
            if (i == n-1 || j ==0 || j == n-i-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void hollowDiamond(int n){
    hollowFullPyramid(n);
    hollowInvertedFullPyramid(n);
}

int main(){
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    hollowDiamond(n);
}
