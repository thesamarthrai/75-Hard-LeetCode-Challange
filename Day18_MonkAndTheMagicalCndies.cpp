// 1---->t
// 5 3---->n &k
// 2 1 7 4 2---->a[];

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int total =0;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v1;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v1.push_back(x);
        }

        while(k--){
            sort(v1.begin(), v1.end());
          
            int div = v1[n-1] / 2;
            total += v1[n-1];
            
            // Replace the highest element with its halved value
            replace(v1.begin(), v1.end(), v1[n-1], div);
        } 

        cout << total << endl;
    }

    return 0;
}
