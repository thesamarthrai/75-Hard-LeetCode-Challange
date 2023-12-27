// TLE for las Input

// class Solution {
// public:
//     string reverseVowels(string s) {
//         string str="";
//         for(int i=0; i<s.size();i++){
//             if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' ||s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
//                 for(int j =(i+1) ; j<s.size();j++){
//                      if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' ||s[j] == 'I' || s[j] == 'O' || s[j] == 'U'){            
//                          char temp;
//                          temp = s[i];
//                          s[i] = s[j];
//                          s[j] = temp;
//                      }
//                 }
//             }
//             str+=s[i];
//         }
//         return str;
//     }
// };

class Solution {
public:
    string reverseVowels(string s) {
        string str = "";
        int i = 0, j = s.size() - 1;

        while (i < j) {
            // Find the next vowel from the beginning
            while (i < j && !isVowel(s[i]))
                i++;

            // Find the next vowel from the end
            while (i < j && !isVowel(s[j]))
                j--;

            // Swap the vowels
            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};
