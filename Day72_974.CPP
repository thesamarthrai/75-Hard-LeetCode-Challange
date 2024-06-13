#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> remainderCount;
        remainderCount[0] = 1;  // Initialize with remainder 0 having frequency 1
        
        int cumulativeSum = 0;
        int count = 0;
        
        for (int num : nums) {
            cumulativeSum += num;
            int remainder = cumulativeSum % k;
            
            // Adjust remainder to be positive if it's negative
            if (remainder < 0) {
                remainder += k;
            }
            
            // If this remainder has been seen before, there are some subarrays which sum to a multiple of k
            if (remainderCount.find(remainder) != remainderCount.end()) {
                count += remainderCount[remainder];
            }
            
            // Increment the frequency of this remainder
            remainderCount[remainder]++;
        }
        
        return count;
    }
};
