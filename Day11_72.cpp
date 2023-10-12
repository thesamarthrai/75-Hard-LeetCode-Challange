//My approach 

class Solution {
public:
    int minDistance(string word1, string word2) {
        int count = 0;
        int size,ans;
        if(word1.size()>word2.size()){
            for(int i=0;i<word2.size();i++){
                if(word1[i]==word2[i]){
                    continue;
                }else if(word1[i]!=word2[i]){
                    // word1.replace(i,1,word2[i]);
                    count++;
                }
            }
            ans = count+1;
        }
        
        if(word1.size()<word2.size()){
            for(int i =0; i<word1.size();i++){
                if(word1[i]==word2[i]){
                    continue;
                }else if(word1[i]!=word2[i]){
                    // word1.replace(i,1,word2[i]);
                    count++;
                }
            }
             size = word2.size()-word1.size();
             ans = count + size;
        }

        if(word1.size()==word2.size()){
            for(int i = 0;i<word1.size();i++){
                if(word1[i]==word2[i]){
                    continue;
                }else if(word1[i]!=word2[i]){
                    // word1.replace(i,1,word2[i]);
                    count++;
                }
            }
            ans = count;
        }

        return ans;

    }
};

//Another method

class Solution {
 public:
  int minDistance(string word1, string word2) {
    const int m = word1.length();//first word length
    const int n = word2.length();//second word length
    // dp[i][j] := min # of operations to convert word1[0..i) to word2[0..j)
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    for (int i = 1; i <= m; ++i)
      dp[i][0] = i;

    for (int j = 1; j <= n; ++j)
      dp[0][j] = j;

    for (int i = 1; i <= m; ++i)
      for (int j = 1; j <= n; ++j)
        if (word1[i - 1] == word2[j - 1])//same characters
          dp[i][j] = dp[i - 1][j - 1];//no operation
        else
          dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1;
                             //replace       //delete        //insert
    return dp[m][n];
  }
};