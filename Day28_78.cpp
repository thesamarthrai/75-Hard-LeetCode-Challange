class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int nums_size = nums.size();
        int subset_count = (1<<nums_size);
        vector<int>binary_numbers;
        for(int i=0;i<nums_size;i++){
            int number = binary_num(i);
            binary_numbers.push_back(number);
        }
        int andnum = binary_num(nums_size);

        
        
    }
};