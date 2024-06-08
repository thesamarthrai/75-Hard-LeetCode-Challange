#include <iostream>
using namespace std;

int main() {
    
    int T;
    cout<<"Enter the value for T here : ";
    cin>>T;
    
    int count =0;
    while(T--){
        int N;
    int A[N];
        cout<<"\nEnter the value for N here : ";
        cin>>N;
    
    for(int i=0;i<N;i++){
        cout<<"\nEnter the value for A here : ";
        cin>>A[i];
    }
    
    for(int i=0;i<N-1;i++){
            if(A[i]!=A[i+1]){
                count++;
            }else if(A[i]==A[i+1]){
                count=count+0;
            }
            
            }
            cout<<"\nCount"<<count;
        
    }
	
	return 0;
}

