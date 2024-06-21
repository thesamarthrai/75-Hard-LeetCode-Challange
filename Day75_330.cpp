#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int minPatches(vector<int> &nums, int n)
    {
        int count = 0;
        long long maxReach = 0; // The maximum sum we can reach
        int i = 0;              // Index for iterating over the nums array

        // Continue until we can cover all sums up to n
        while (maxReach < n)
        {
            // If the current number is within the reach, add it to the max reach
            if (i < nums.size() && nums[i] <= maxReach + 1)
            {
                maxReach += nums[i];
                i++;
            }
            else
            {
                // If the current number is beyond the reach, we need to patch
                maxReach += maxReach + 1;
                count++;
            }
        }

        return count;
    }
};
