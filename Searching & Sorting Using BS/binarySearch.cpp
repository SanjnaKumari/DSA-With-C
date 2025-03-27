#include <iostream>;
using namespace std;

//This binary search is for increasing sorted array
class Solution {
public:
    int search(int arr[], int n, int target) {
        int s = 0;
        int e = n-1;

        while(s <= e) {
            int mid = s + (e-s)/2;
            if(arr[mid] == target) {
                return mid;
            }
            if(target > arr[mid] ){
                //right me jao
                s= mid + 1;
            }
            else if(target < arr[mid] ) {
                //left me jao 
                e = mid - 1;
            }
            // //ye main bhul jata hu
            // mid = s + (e-s)/2;
        }
        //agar main yaha pohoch gya
        //iska mtlb elemnt nahi mial
        //noit found -> return -1;
        return -1;
    }
};

//To Do: Binary search is for decreasing sorted array

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int target = 5;
    Solution obj;
    cout<<obj.search(arr, n, target);
    return 0;
}