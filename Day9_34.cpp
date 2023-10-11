// 34. Find First and Last Position of Element in Sorted Array

class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int position){
        int result = -1;
        int l = 0, r = nums.size() - 1;
        while (l <= r){
            int middle = l + (r - l) / 2;
            if(nums[middle] == target){
                result = middle;
                if(position == 1) l = middle + 1;
                if(position == -1) r = middle - 1;
            }
            else if(nums[middle] < target){
                l = middle + 1;
            }
            else r = middle - 1;
        }
        return result;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {binarySearch(nums, target, -1), binarySearch(nums, target, 1)};
    }
};
