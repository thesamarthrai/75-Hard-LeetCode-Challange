#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1_size;
    int arr2_size;
    cin >> arr1_size >> arr2_size;
    
    int arr1[arr1_size];
    int arr2[arr2_size];
    
    for (int i = 0; i < arr1_size; i++) {
        cin >> arr1[i];
    }
    
    for (int i = 0; i < arr2_size; i++) {
        cin >> arr2[i];
    }
    
    unordered_map<int, int> m1;
    
    for (int i = 0; i < arr1_size; i++) {
        m1[arr1[i]] = i;
    }
    
    for (int i = 0; i < arr2_size; i++) {
        if (m1.find(arr2[i]) == m1.end()) {
            cout << "No\n";
            return 0;
        }
    }
    
    cout << "Yes\n";
    
    return 0;
}
