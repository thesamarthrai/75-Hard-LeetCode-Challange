//BinarySearch Problem

#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,w;

vector<int>main_vector;
vector<int>v1;
vector<bool>v2;

cin>>n>>w;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    main_vector.push_back(x);
}

int maxi = *max_element(main_vector.begin(),main_vector.end());
for(int i=0;i<maxi;i++){
    int sum =0;
    for(int j=0;j<n;j++){
    int peredicate = main_vector[j]-i;
    if(peredicate<0){
        peredicate = 0;
    }else{
        sum+=peredicate;
    }
}
 v1.push_back(sum);
 if(sum>=w){
        v2.push_back(true);
    }else{
        v2.push_back(false);
    }
}

int l=0;
int r= v2.size()-1;

// for(int i=0;i<v2.size();i++){
//     cout<<v1[i]<<" ";
// }

// cout<<endl;

// for(int i=0;i<v2.size();i++){
//     cout<<v2[i]<<" ";
// }

while(r-l>1){
    int mid = (l+r)/2;
    if(v2[mid]==true){
        l=mid;
    }else{
        r=mid;
    }
}
    cout<< l;
    
    return 0;
}
