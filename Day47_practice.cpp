//Practice for all structure

//Vectors

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v1;
    int size;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }

    for (int i = 0; i < size; i++)
    {
        cout<<v1[i]<< " ";
    }
    
    

    return 0;
}

//vectors of array

//row will be fixed but col. will be dynamic  -------> 2-d structure

#include<bits/stdc++.h>
using namespace std;

int main(){

    int size;

    vector<int >v1[size];
    cout<<"Enter the size of the array here : ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        int n;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            v1[i].push_back(x);
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";
    }
    
    

    return 0;
}
