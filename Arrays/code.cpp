#include <iostream>
using namespace std;


//Rcving array in function
void printArray( int arr[], int size);

bool findTarget(int arr[], int size, int target){
    for (int i=0;i<size;i++){
        if (arr[i] == target){
            return true;
        }
    }
    return false;

}

int findMax(int arr[], int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    // Array Creation

    // int arr[10];
    // int brr[] = {1, 2, 3, 4, 5};
    // int crr[5] = {0};
    
    // Will give garbage values and it is segmentation fault
    // cout << crr[6];

    //This will fill 23 on all 4 positions
//     int arr[4];
//     fill(arr, arr+4, 23);


    // int arr[5];
    // for (int i=0;i<5;i++){
    //     cout << "Enter the value of arr[" << i << "]: ";
    //     cin >> arr[i];
    // }
    // for (int i=0;i<5;i++){
    //     cout << arr[i] << " ";
    // }
    
    //Passing array to function
    // int arr[] = {1, 2, 3, 4, 5};
    // int size = 5;
    // printArray(arr, size);



    int arr[100];
    
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    for (int i =0;i<size;i++){
        cout << "Enter the value of arr[" << i << "]: ";
        cin >> arr[i];
    }

    // int target;
    // cout << "Enter the target value: ";
    // cin >> target;
    // bool ans = findTarget(arr, size, target);
    // cout << "Target value result: " << ans << endl;

    cout <<"Max value is " << findMax(arr, size);
}


