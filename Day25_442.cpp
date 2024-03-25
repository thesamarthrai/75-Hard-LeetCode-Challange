#include<map>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v1;
      map<int,int>map;
      for(int i=0;i<nums.size();i++){
        map[nums[i]]++;
      }
      for(auto x : map){
        if(x.second > 1){
            v1.push_back(x.first);
        }
      }
      return v1;
    }
};