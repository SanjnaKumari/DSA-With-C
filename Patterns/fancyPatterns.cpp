#include <iostream>
using namespace std;

void fancyPattern1(int n){
    if (n >9){
        cout << "Please enter a number less than 10" << endl;
        return;
    }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<2*n-i-2; j++){
    //         cout << "* ";
    //     }
    //     for(int j=0; j<i+1; j++){
    //         cout << i+1 << " * ";
    //     }
    //     for(int j=0; j<2*n-i-3; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //Second method
    for(int i = 0;i<n;i++){
        int start_index = 8-i;
        int num = i+1;
        int count_num = num;
        for(int j = 0;j<17;j++){
            if(j==start_index && count_num>0){
                cout << num << " ";
                start_index += 2;
                count_num--;
            }else{
                cout << "* ";
            }
        }
        cout << endl;
    }
}


void fancyPattern2(int n){
    int start = 1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<2*i+1;j++){
            if(j%2==0){
                cout << start << " ";
                start++;
            }
            else{
                cout << "* ";
            }
            
        }
        cout << endl;
    }
    start = start-n;
     for(int i = 0;i<n;i++){
        int start2 = start;
        for(int j = 0;j<2*(n-i)-1;j++){
            if(j%2==0){
                cout << start2 << " ";
                start2++;
            }
            else{
                cout << "* ";
            }          
        }
        start = start - (n-i-1);
        cout << endl;
    }
}


void fancyPattern3(int n){
    for(int i = 0;i<=n;i++){
        int lastNo = i-1;
        for(int j = 0;j<2*i+1;j++){
            if(j==0 || j== 2*i){
                cout << "* ";
            }
           else if (j<=i){
                cout << j << " ";
            }
            else{
                cout << lastNo << " ";
                lastNo = lastNo-1;
            }
            
        }
        cout << endl;
    }
    for(int i = 1;i<=n;i++){
        int lastNo = (n-i);
        for(int j = 0;j<=2*(n-i);j++){
            if(j==0 || j== 2*(n-i)){
                cout << "* ";
            }
            else if (j<=(n-i)-1 ){
                 cout << j<< " ";
            }
            else{
                cout << lastNo << " ";
                lastNo = lastNo-1;
            } 
        }
        cout << endl;
    }
}
int main(){
    int n;  
    cout << "Enter the number n: ";
    cin >> n;

    // fancyPattern1(n);
    // fancyPattern2(n);
    fancyPattern3(n);

}