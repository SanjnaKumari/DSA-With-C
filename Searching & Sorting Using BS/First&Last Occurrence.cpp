#include <iostream>;
using namespace std;

class Solution {
public:


//Question 01: First Occurence using store and compute strategy
    void findFirstOccurrence(int arr[], int n, int target, int &ansIndex) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(arr[mid] == target) {
            //ans found -> may or may not be first occurence
            //store and compute
            //Store the index
            ansIndex = mid;
            //kyoki first occurence ki baat hori h
            //toh batao left me jau first occ k liye ya right me 
            //left me jao
            //Compute
            e = mid - 1;
        }
        if(target > arr[mid] ) {
            ///right me jao
            s = mid + 1;
        }
        if(target < arr[mid]) {
            //left me jao 
            e = mid-1;
        }
        //ye main bhul jata hu
        mid = s + (e-s)/2;
    }
}


//Question 02: Last Occurence using store and compute strategy
void findLastOccurrence(int arr[], int n, int target, int &ansIndex) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(arr[mid] == target) {
            //target k equal toh hai
            //but may or may not be last occurrence
            //store and compute
            ansIndex = mid;
            //right me jao
            s = mid + 1;
        }
        if(target > arr[mid] ) {
            //right me jao
            s = mid+1;
        }
        if(target < arr[mid] ) {
            //left me jao 
            e = mid - 1;
        }
        //ye main bhul jata hu
        mid = s + (e-s)/2;
    }
}

};

int main(){

    ////Question 01: First Occurence using store and compute strategy
    int arr[] = {1,2,3,4,5,5,5,5,5,6,7,8,9};
    int n = 13;
    int target = 5;
    Solution obj;
    //ansIndex passing by reference so that it will be updated not copied
    //-1 means target not found
    int ansIndex = -1;
    obj.findFirstOccurrence(arr, n, target, ansIndex);
    cout<< "First occurrence index " << ansIndex;
    return 0;


    ////Question 02: Last Occurence using store and compute strategy
    int arr[] = {1,2,3,4,5,5,5,5,5,6,7,8,9};
    int n = 13;
    int target = 5;
    Solution obj;
    //ansIndex passing by reference so that it will be updated not copied
    //-1 means target not found
    int ansIndex = -1;
    obj.findLastOccurrence(arr, n, target, ansIndex);
    cout<< "Last occurrence index " << ansIndex;
}