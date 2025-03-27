#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         if(i == 0){
    //             cout << j+1 << " ";
    //         }
    //         else if (j ==0){
    //             cout << i+1 << " ";
    //         }
    //         else if (j ==n-i-1){
    //             cout << n << " ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


    //Second method
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(j == i+1 || j ==n || i == 0){
                cout << j << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}