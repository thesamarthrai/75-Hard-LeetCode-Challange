// class Solution {
// public:
//     int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
//         vector<pair<int,int>>jobPairs;
//         int count =0;
//         for(int i=0;i<difficulty.size();i++){
//             jobPairs.push_back({difficulty[i], profit[i]});
//         }

//         sort(jobPairs.begin(),jobPairs.end());

//         sort(worker.begin(),worker.end());

//         for(int i=0;i<worker.size();i++){
//             for(int j=0;j<jobPairs.size();j++){
//                   if(worker[i]<jobPairs[j].first){
//                     continue;
//                   }else if(worker[i]==jobPairs[j].first){
//                     count+=jobPairs[j].second;
//                     break;
//                   }else if(worker[i]>jobPairs[j].first && worker[i]<jobPairs[j+1].first){
//                     count+=jobPairs[j].second;
//                     break;
//                   }else if(worker[i]>*max_element(difficulty.begin(),difficulty.end())){
//                     int size = difficulty.size();
//                     count+=jobPairs[size-1].second;
//                     break;
//                   }
//                   else{
//                     continue;
//                   }
//             }
//         }
//         return count;
//     }
// };

class Solution
{
public:
    int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit, vector<int> &worker)
    {
        vector<pair<int, int>> jobPairs;
        int totalProfit = 0;

        for (int i = 0; i < difficulty.size(); i++)
        {
            jobPairs.push_back({difficulty[i], profit[i]});
        }

        sort(jobPairs.begin(), jobPairs.end());

        sort(worker.begin(), worker.end());

        int j = 0;
        int bestProfit = 0;

        for (int i = 0; i < worker.size(); i++)
        {

            while (j < jobPairs.size() && worker[i] >= jobPairs[j].first)
            {
                bestProfit = max(bestProfit, jobPairs[j].second);
                j++;
            }

            totalProfit += bestProfit;
        }

        return totalProfit;
    }
};