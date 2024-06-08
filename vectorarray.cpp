#include<bits/stdc++.h>
using namespace std;

int main(){

    int size;
    cout<<"Enter the size of the array here ";
    cin>>size;

    vector<int>v[size];

    for (int i = 0; i < size; i++)   // No. of rows will be fixed
    {
        int n;
        
        cout<<"Enter the size of n here : ";
        cin>>n;

        for (int j = 0; j < n; j++)
        {
            int x;
            cout<<"Enter the size of x here : ";
            cin>>x;
            v[i].push_back(x);
        }
        
    }
    
    for (int i = 0; i < size; i++)
    {
       for (int j = 0; j <v[i].size(); j++)
       {
         cout<<v[i][j]<<endl;
       }
       
    }
    

    return 0;
}