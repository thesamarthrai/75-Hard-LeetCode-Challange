class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       std::string result = "";
        int size1 = word1.size();
        int size2 = word2.size();
        int it = std::max(size1, size2);

        for (int i = 0; i < it; i++) {
            if (i < size1) {
                result += word1[i];
            }
            if (i < size2) {
                result += word2[i];
            }
        }

        return result;
    }
};