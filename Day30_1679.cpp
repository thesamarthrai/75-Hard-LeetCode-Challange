class Solution {
public:
    int result;

    int maxOperations(vector<int>& nums, int k) {
        result = 0;
        sort(nums.begin(), nums.end()); // Sort the array

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == k) {
                result++;
                left++;
                right--;
            } else if (sum < k) {
                left++;
            } else {
                right--;
            }
        }

        return result;
    }
};