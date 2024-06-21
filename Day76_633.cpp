// class Solution {
// public:
//     bool judgeSquareSum(int c) {
//         for(int i=0;i<=sqrt(c);i++){
//             long long int nums =0;
//             for(int j=0;j<=sqrt(c);j++){
//                 int num = i*i + j*j;
//                 if(num<c){
//                     continue;
//                 }
//                 else if(num==c){
//                     return true;
//                 }else if(num>c && num!=c){
//                     return false;
//                 }
//             }
//         }
//         return false;
//     }
// };

#include <cmath>

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long long left = 0;
        long long right = static_cast<long long>(sqrt(c));

        while (left <= right)
        {
            long long sum = left * left + right * right;
            if (sum == c)
            {
                return true;
            }
            else if (sum < c)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return false;
    }
};
