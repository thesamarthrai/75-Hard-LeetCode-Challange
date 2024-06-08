// #include<iostream>
// #include<cmath>
// using namespace std;
// #define size 3

// int main(){

//     int arr[size][size];
//     int count1=0;
//     int count2=0;

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             cout<<"Enter the value for "<<i+1<<" "<<j+1<<" index here : ";
//             cin>>arr[i][j];
//         }
        
//     }

//     for (int  i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//              if (i==j)
//              {
//                 count1+=arr[i][j];
//              }

//              if (i+j==size-1)
//              {
//                  count2+=arr[i][j];
//              }
             
    
//         }
        
//     }

//     cout<<count1<<endl;
//     cout<<count2<<endl;
//     cout<<"The difference of diagonal is : "<<abs(count1-count2)<<endl;

//     return 0;
// }

#include<iostream>
// #include <bits/stdc++.h>
#include<cmath>
using namespace std;
// #define size 3

int main(){
    
    int size;
    int arr[size][size];
    int count1=0;
    int count2=0;
    
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // cout<<"Enter the value for "<<i+1<<" "<<j+1<<" index here : ";
            cin>>arr[i][j];
        }
        
    }

    for (int  i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
             if (i==j)
             {
                count1+=arr[i][j];
             }

             if (i+j==size-1)
             {
                 count2+=arr[i][j];
             }
             
    
        }
        
    }

    // cout<<count1<<endl;
    // cout<<count2<<endl;
    // cout<<"The difference of diagonal is : "<<abs(count1-count2)<<endl;
    cout<<abs(count1-count2);

    return 0;
}
