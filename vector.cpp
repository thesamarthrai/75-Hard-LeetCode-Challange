#include<bits/stdc++.h>
using namespace std;

int main(){

    int size;
    cout<<"Enter the size of the array here ";
    cin>>size;

    vector<int>v;

    for (int i = 0; i < size; i++)
    {
        int n;
        
        cout<<"Enter the size of n here : ";
        cin>>n;

        for (int j = 0; j < n; j++)
        {
            int x;
            cout<<"Enter the value of x here : ";
            cin>>x;
            v.push_back(x);
        }
        
    }
    
    for (int i = 0; i < size; i++)
    {
     cout<<v[i]<<endl;
       
    }
    

    return 0;
}