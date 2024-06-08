class Solution {
public:
    vector<string>valid;

    void generate(string &subset,int open,int close){
        if(open==0 && close==0){
             valid.push_back(subset);
             return;
        }

        if(open>0){
            subset.push_back('(');
            generate(subset,open-1,close);
            subset.pop_back();
        }

        if(close>0){
            if(close>open){
            subset.push_back(')');
            generate(subset,open,close-1);
            subset.pop_back();
            }
        }
    }

    vector<string> generateParenthesis(int n) {
        string subset;
        generate(subset,n,n);
        return valid;
    }
};