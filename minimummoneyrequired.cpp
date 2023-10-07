class Solution {
public:
    long long minimumMoney(vector<vector<int>>& transactions) {
        long long total_money = 0;
        long long money_remaining =total_money;
        vector<int>cost;
        vector<int>cashback;

        for(int i =0 ; i<transactions.size();i++){
            for(int j=0;j<transactions[i].size();j++){
           cost.push_back(transactions[i][0]);
           cashback.push_back(transactions[i][1]);
            }
        }
        
         for(int i=0;i<cost.size();i++){
              total_money = total_money + cost[i];
         }
         total_money = total_money - 1;

         for(int i=0;i<cashback.size();i++){
             money_remaining+=cost[i]+cashback[i];

            if(money_remaining <0){
                total_money = total_money+1;
                continue;
         }
            
        }
        return total_money;
    }
};

// class Solution {
// public:
//     long long minimumMoney(vector<vector<int>>& t) 
//     {
 
        
//         long long money=0;
//         long long ans =0;
//         vector<int>v;
        
//         for(int i=0;i<t.size();i++)
//         {
//             ans = max(ans,1LL*t[i][0]);
         
//         }
        
//         int n = t.size();
//         for(int i=0;i<n;i++)
//         {
            
//            if((t[i][1]-t[i][0])<=0)   // A money loosing transaction
//            {
//                money+=t[i][1]-t[i][0];
//            }
            
            
//         }
// 		ans = max(ans,abs(money));
//         // money stores the money which I have to loose ultimatelty;
		
		
//         for(int i=0;i<n;i++)
//         {
		   
// 		    // the worst thing that can happen before ith trancation is doing all money loosing transactions 
// 			//  before ith one
			
//             if((t[i][1]-t[i][0])<=0)  // if ith transaction is money loosing
//             {
//                 money-=t[i][1]-t[i][0];  // remove contribution of ith transaction which is added in money 
// 				                                   // above
//             }
//             if((money-t[i][0])<0)
//             {
//                 ans = max(ans,abs(money-t[i][0]));  // money required is max of ans and (cost of ith transaction) + loosing money 
//             } 
          
//              if((t[i][1]-t[i][0])<=0) 
//             {
//                 money+=t[i][1]-t[i][0]; // just undo the changes made for ith transaction
//             }

//         }
        
//         return ans;
        
//     }
// };