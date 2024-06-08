/*2104. Sum of Subarray Ranges

You are given an integer array nums. The range of a subarray of nums is the difference between the largest and smallest element in the subarray.

Return the sum of all subarray ranges of nums.

A subarray is a contiguous non-empty sequence of elements within an array.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v;
    int count=0;   //-3 -2 1 4 4
    int i = 0;
    int j= 0;

    for (int i = 0; i < v.size(); i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (i = 0; i <= j;)
    {
        for (j = 0; j >= i; j++)

        {

            count+=v[j]-v[i];

             if (i!=j)
            {
                i++;
                continue;
            }else if (i==j)
            {
                break;
            }
            
        }
        
        if (i>j)
        {
            break;
        }else{
            i=0;
        }
        
        if (j>=v.size())
        {
            break;
        }
         
    }

    cout<<count<<endl;
    

    return 0;
}