#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<pair<int , int >>v;
    int size;
    cout<<"Enter the size of the vecpair here : ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the value of "<< i+1 << " Vecpair here : ";
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<< v[i].first<<" "<< v[i].second<<endl;
    }
    
    return 0;
}
