#include <unordered_map>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stack<string> s1;
        string word = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (!word.empty()) // Push non-empty words onto the stack
                    s1.push(word);
                word = ""; // Reset word for the next word
            } else {
                word += s[i];
            }
        }
        
        // Push the last word onto the stack
        if (!word.empty())
            s1.push(word);
        
        // Reconstruct the string from the stack
        string reversedString;
        while (!s1.empty()) {
            reversedString += s1.top();
            s1.pop();
            if (!s1.empty()) // Add space between words
                reversedString += ' ';
        }
        
        return reversedString;
    }
};
