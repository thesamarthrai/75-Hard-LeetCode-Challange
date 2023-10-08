class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
            if(!binary_search(nums.begin(),nums.end(),i)){
            v1.push_back(i);
        }
        }
      return v1;
    }
};