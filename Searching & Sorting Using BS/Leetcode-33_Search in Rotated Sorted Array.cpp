class Solution {
public:

    int getPivotIndex(vector<int>& nums){
        int s = 0;
        int n = nums.size();
        int e = n-1;
        int mid = s + (e-s)/2;

        while(s<=e){
             if(s == e) {
                //single element k case me 
                //humne usse hi pivot maaanlia hai
                return s;
            }
            if(mid+1 <n && nums[mid]>nums[mid+1]){
                return mid;
            }
            if(nums[s]>nums[mid]){
                //move left
                e = mid -1;
            }
            else{
                //move right
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return -1;
    };

    int binarySearch(int s, int e, int target, vector<int> arr) {
        int mid = s+(e-s)/2;
        while(s<=e) {
            if(arr[mid] == target) {
                return mid;
            }
            if(target > arr[mid]) {
                s = mid+1;
            }
            else {
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivotIndex = getPivotIndex(nums);

        //lineA
        //start -> 0 index
        //end -> pivotIndex

        //line B
        //start -> pivotIndex+1;
        //end -> n-1;

        int n = nums.size();
        if(target>=nums[0] && target<=nums[pivotIndex]){
            int ans = binarySearch(0,pivotIndex,target,nums);
            return ans;
        }
        else{
            int ans = binarySearch(pivotIndex+1,n-1,target,nums);
            return ans;
        }
        return -1;
    }
};