#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixProducts(n, 1);
        vector<int> suffixProducts(n, 1);
        vector<int> ans(n);

        // Compute prefix products
        for (int i = 1; i < n; ++i) {
            prefixProducts[i] = prefixProducts[i - 1] * nums[i - 1];
        }

        // Compute suffix products
        for (int i = n - 2; i >= 0; --i) {
            suffixProducts[i] = suffixProducts[i + 1] * nums[i + 1];
        }

        // Compute final result
        for (int i = 0; i < n; ++i) {
            ans[i] = prefixProducts[i] * suffixProducts[i];
        }

        return ans;
    }
};


// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int>ans(nums.size(),1);
//         for(int i=0;i<nums.size();i++){
//             for(int j=0;j<nums.size();j++){
//                 if(i==j){
//                     continue;
//                 }else{
//                     ans[i]=ans[i]*nums[j];
//                 }
//             }
//         }
//         return ans;
//     }
// };
