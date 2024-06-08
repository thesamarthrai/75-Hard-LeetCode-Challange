#include<iostream>
#include<string>
using namespace std;

int main(){

    int t;
cin>>t;
while (t--)
{
    int n;
    string arr1[50];
    string arr2[50];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Another string"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
    
    if (sizeof(arr1)==sizeof(arr2))
    {
       cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE";
    }
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
             if (arr1[i] != arr2[i])
             {
                arr1[i]=arr2[i];  
                for (int i = 0; i < n; i++)
                {
                  for (int j = i+1; i < n; j++)
                  {
                    if ()
                    {
                       
                    }
                    
                  }
                    
                }
                
             }
             
        }
        
    }
       
}
    return 0;
}