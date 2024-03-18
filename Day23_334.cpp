class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;
        
        for (int i = 0; i < n; ++i) {
            if (nums[i] <= smallest) {
                smallest = nums[i];
            } else if (nums[i] <= secondSmallest) {
                secondSmallest = nums[i];
            } else {
                return true; // Found increasing triplet
            }
        }
        
        return false; // No increasing triplet found
    }
};
