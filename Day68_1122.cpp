class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> sorted = arr1;
        vector<int> result;
        sort(sorted.begin(), sorted.end());
        
        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < sorted.size(); j++) {
                if (sorted[j] == arr2[i]) {
                    result.push_back(arr2[i]);
                    sorted.erase(sorted.begin() + j);
                    j--; // Adjust index after erase to avoid skipping elements
                }
            }
        }

        if (sorted.size() != 0) {
            for (int i = 0; i < sorted.size(); i++) {
                result.push_back(sorted[i]);
            }
        }

        return result;
    }
};