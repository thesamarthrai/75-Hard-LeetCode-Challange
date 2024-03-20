class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size()) {
            return -1;
        } else {
            for (int i = 0; i < haystack.size(); i++) {
                int count = 0;
                for (int j = i; j < haystack.size() && count < needle.size() && haystack[j] == needle[count]; j++) {
                    count++;
                }
                if (count == needle.size()) {
                    return i; // Return starting index (i)
                }
            }
            return -1; // Add this line to ensure a return in all cases
        }
    }
};
