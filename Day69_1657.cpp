class Solution {
public:
    bool closeStrings(string word1, string word2) {
        bool is_available = false;
        for(int i = 0; i < word2.size(); i++) {
            for(int j = 0; j < word1.size(); j++) {
                if(word2[i] == word2[j]) {
                    is_available = true;
                }else{
                    is_available = false;
                }
            }
        }
        if(is_available == true) {
            if(word1.size() == word2.size()) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
        return false;  // Added to ensure all control paths return a value
    }
};
