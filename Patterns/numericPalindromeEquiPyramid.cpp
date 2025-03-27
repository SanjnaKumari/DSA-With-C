#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout <<"  ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout <<j+1 << " ";
    //     }
    //     for(int j=i;j>0;j--){
    //         cout <<j << " ";
    //     }

    //     cout << endl;
    // }


    //2nd Method
    int k = n;
    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=0;j<k;j++){
            if(j<n-i-1){
                cout << "  ";
            }
            else if(j<=n-1){
                cout << count << " ";
                count++;
            }
            else if(j==n){
                count = count-2;
                cout << count << " ";
                count--;
            }
            else{
                cout << count << " ";
                count--;
            }
        }
        k++;
        
        cout << endl;
    }


}