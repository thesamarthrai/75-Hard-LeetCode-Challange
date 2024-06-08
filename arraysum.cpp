//WAP to find the array sum using Recursion

#include<bits/stdc++.h>
using namespace std;

int func(int n,int arr[]){
    if(n<0) return 0;
    return func(n-1,arr)+arr[n];
}

int main(){

    int n;
    cout<<"Enter the size of the array here : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element here : ";
        cin>>arr[i];
    }

   cout<<func(4,arr);

    return 0;
}