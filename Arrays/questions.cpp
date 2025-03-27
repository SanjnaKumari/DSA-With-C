#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int n){
    int countZero = 0;
    int countOne = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==0){
            countZero++;
        }
        else{
            countOne++;
        }
    }
    for(int i = 0;i<countZero;i++){
        arr[i] = 0;
    }
    for(int i = countZero;i<n;i++){
        arr[i] = 1;
    }
}


void createPairs(int arr[], int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
}


void createUniquePairs(int arr[], int n){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
}


pair<int,int> twoSum(int arr[], int n, int target){
    pair<int,int> ans = make_pair(-1,-1);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;
}


void twoSumAll(int arr[], int n, int target){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}


void allTriplets(int arr[], int n){
    //TC = O(n^3)
    //SC = O(1)
    int count = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            for(int k = 0;k<n;k++){
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                count++;
            }
        }
    }
    cout << "Total triplets: " << count << endl;
}


void threeSum(int arr[], int n, int target){
    //TC = O(n^3)
    //SC = O(1)
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}


void rotateArray(int arr[], int size, int shift){
    int finalShift = shift%size;

    if(finalShift==0){
        //No need to rotate
        return;
    }

//Copy last finalShift elements to temp array
    int temp[finalShift];
    int index=0;
    int ans[size];
    for(int i = size-finalShift;i<size;i++){
        temp[index] = arr[i];
        index++;
    }

    //Shift array elements by  finalShift places.
    for(int i = 0;i<size-finalShift;i++){
        ans[i+finalShift] = arr[i];
    }
    //Second method if saving in same array
    // for(int i = size-1;i>=finalShift;i--){
    //     arr[i] = arr[i-finalShift];
    // }

    //Copy temp array to ans array
    for(int i = 0;i<finalShift;i++){
        ans[i] = temp[i];
    }

    for(int i = 0;i<size;i++){
        cout << ans[i] << " ";
    }
    
}
int main(){
    //sortZeroOne
    // int arr[] = {0,1,1,1,1,1,0,0,1,1,1};
    // sortZeroOne(arr,11) ;
    // for(int i = 0;i<11;i++){
    //     cout << arr[i] << " ";
    // }

    //Create pairs
    // int array[] ={10,20,30,40};
    // createPairs(array,4);

    //Two sum
    // int array[] = {12,9,11,15,8,45,5};
    // pair<int,int> ans = twoSum(array,7,100);
    // if (ans.first!=-1 && ans.second!=-1){
    //     cout << "Pair exists " << ans.first << ", " << ans.second << endl;
    // }
    // else{
    //     cout << "Pair does not exist" << endl;
    // }

    // //Two sum and print all.
    // int array[] = {12,9,11,15,8,45,5};
    // twoSumAll(array,7,20);

    //Print all triplets
    // int array[] = {1,2,3,5,4};
    // allTriplets(array,5);

    //Three sum
    // int array[] = {10,20,30,50,40};
    // threeSum(array,5,100);

    //Rotate array      
    // int array[] = {10,20,30,40,50,60,70};
    // int size =7;
    // int shift = 3;
    // rotateArray(array,size,shift);

}