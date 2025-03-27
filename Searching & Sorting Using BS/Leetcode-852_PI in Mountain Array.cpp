#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int n = arr.size();
        int e = n-1;
        int mid = s + (e-s)/2;
        int ansIndex = -1;
        while(s <= e) {
            if(arr[mid] < arr[mid+1]) {
                s = mid+1;
            }
            else {
                //may or may not be 
                //Store the index
                ansIndex = mid;
                //Compute
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
        return ansIndex;   


        //Second Solution
        // while(s<e) {
        //     if(arr[mid] < arr[mid+1]) {
        //         ///move right
        //         s = mid+1;
        //     }
        //     else {
        //         ////ya toh main line B pr hu
        //         //ya toh main ans pr hi hu 
        //         e = mid;
        //     }
        //     mid = s+(e-s)/2;
        // }
        // return mid;
    }
};

int main(){
    Solution s;
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(0);
    cout<<s.peakIndexInMountainArray(arr);
   
}