//My approach to solve the problem

class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        int count = 0;
        int count1 = 0;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        for (int i = 0; i < s1.size(); i++) {
            if (s2[i] >= s1[i]) {
                count++;
            }else if(s1[i]>=s2[i]){
                 count1++;
            }
        }

        // if (count == s2.size() || count1 == s1.size()) {
        //     return true;
        // } else if (count < s2.size() || count1<s1.size()) {
        //     return false;
        // } else {
        //     return false;
        // }

        if(count == s2.size()){
            return true;
            exit(0);
        }else if(count1 == s1.size()){
            return true;
             exit(0);
        }else if(count < s2.size()){
            return false;
             exit(0);
        }else if(count1 < s1.size()){
            return false;
             exit(0);
        }else{
            return false;
            exit(0);
        }
    }
};

//Another Approach

class Solution {
public:
    bool solve(string &s1, string &s2){
        if(s1.size() != s2.size()) return false ;
        sort(s1.begin() , s1.end()) ;
        sort(s2.begin() , s2.end()) ;
        for(int i = 0 ; i < s1.size() ; i++){
            if(s1[i] > s2[i]) return false ;
        }
        return true ;
    }
    bool checkIfCanBreak(string s1, string s2) {
        return solve(s1,s2)||solve(s2,s1);
    }
};
