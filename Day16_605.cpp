//By own in vs code

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int>flowerbed;
//     int size;
//     cin>>size;
//     int n;
//     cin>>n;
//     for (int i = 0; i < size; i++)
//         {
//             int x;
//             cout<<"Enter the value of x here : ";
//             cin>>x;
//             flowerbed.push_back(x);
//         }
    
//     int count =0;
//         if(n==0){
//             cout<< "true";
//         }
//         for(int i=0;i<flowerbed.size();i++){
//            if(flowerbed[i] == 1){
//                if(flowerbed[i+1]==1 || flowerbed[i-1]==1){
//                    cout<<"false";
//                    break;
//                }else{
//                    i++;
//                }
//            }else if(flowerbed[i] == 0){
//                if(flowerbed[i+1] == 0 && flowerbed[i-1] !=1 && flowerbed[i+1] !=1){
//                    flowerbed[i] =1;
//                    count++;
//                }else if(flowerbed[i+1] == 1){
//                    i++;
//                }
//            }
//         }

//         if(count == n){
//             cout<<"true";
//         }else{
//             cout<<"false";
//         }
//     return 0;
// }

//Same with class

// class Solution {
// public:
//     bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
//         int count =0;
//         if(n==0){
//             return true;
//         }
//         for(int i=0;i<flowerbed.size();i++){
//            if(flowerbed[i] == 1){
//                if(flowerbed[i+1]==1 || flowerbed[i-1]==1){
//                    return false;
//                    break;
//                }else{
//                    i++;
//                }
//            }else if(flowerbed[i] == 0){
//                if(flowerbed[i+1] == 0 && flowerbed[i-1] !=1 && flowerbed[i+1] !=1){
//                    flowerbed[i] =1;
//                    count++;
//                }else if(flowerbed[i+1] == 1){
//                    i++;
//                }
//            }
//         }

//         if(count == n){
//             return true;
//         }else{
//             return false;
//         }
//     }
// };

#include <vector>

class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();

        if (n == 0) {
            return true;
        }

        for (int i = 0; i < size; ++i) {
            if (flowerbed[i] == 0) {
                int nextPos = (i == size - 1) ? 0 : flowerbed[i + 1];
                int prevPos = (i == 0) ? 0 : flowerbed[i - 1];

                if (nextPos == 0 && prevPos == 0) {
                    flowerbed[i] = 1;
                    count++;
                    i++; // Skip the next position since we have planted a flower there
                }
            }
        }

        return count >= n;
    }
};
