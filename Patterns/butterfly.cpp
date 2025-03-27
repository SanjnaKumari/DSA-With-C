#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter the number n: ";
    cin >> n;
    for(int i = 0;i<2*n;i++){
        int cond = 0;
        int space_count = 0;
        if(i<n){
            cond = i;
            space_count = 2*(n-cond-1);
        }
        else{
            cond = 2*n-i-1;
            space_count = i-cond-1;
        }
        for(int j = 0;j<2*n;j++){
            
                if (j<=cond){
                cout << "* ";
                }
                else if(space_count>0){
                    cout << "  ";
                    space_count--;
                }
                else{
                    cout << "* ";
                }
            
            
            
        }
        cout << endl;
    }
    return 0;
}