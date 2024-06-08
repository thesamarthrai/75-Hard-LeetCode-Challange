#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int N;
    int arr[101];
    double count1=0;
    double count2=0;
    double count3=0;
    cin>>N;
    for (int i=0; i<N; i++) {
         cin>>arr[i];
    }
    for (int i=0; i<N; i++) {
        if (arr[i]>0) {
        count1++;
        }else if (arr[i]<0) {
         count2++;
        }else if(arr[i]==0) {
        count3++;
        }
    }
    
      double x= count1/N;
      double y= count2/N;
      double z= count3/N;
        
        cout<<setprecision(6)<<x<<endl;
        cout<<setprecision(6)<<y<<endl;
        cout<<setprecision(6)<<z<<endl;
        
    
    return 0;
}