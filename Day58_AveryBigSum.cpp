#include<iostream>
using namespace std;

int main(){
    
    int size;
    long int arr[size];
    long int count=0;

    cout<<"Enter the size for array here : ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
         cout<<"Enter the value for arr "<< i+1 << " here : ";
         cin>>arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        count+=arr[i];
    }

    cout<<count;

    return 0;
}