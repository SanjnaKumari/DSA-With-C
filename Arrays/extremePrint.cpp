#include <iostream>
using namespace std;

void extremePrint(int arr[], int size){
    int i = 0;
    int j = size-1;

    while(i<=j){
        if(i==j){
            cout << arr[i];
            break;
        }
        else{
            cout << arr[i] << " ";
            i++;

            cout << arr[j] << " ";
            j--;
        }
    }
}
int main(){
    int arr[] = {10,80,90,60,20,30,50};
    int size = 7;

    extremePrint(arr, size);

}