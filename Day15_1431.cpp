class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int size = candies.size();
        vector<int> result(size);
        vector<bool> res;

        for (int i = 0; i < candies.size(); i++) {
            result[i] = candies[i] + extraCandies;
        }

        int maxi = *max_element(candies.begin(), candies.end());

        for (int i = 0; i < result.size(); i++) {
            if (result[i] >= maxi) {
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }

        return res;
    }
};
