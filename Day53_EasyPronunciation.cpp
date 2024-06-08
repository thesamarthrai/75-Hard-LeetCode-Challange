#include <iostream>
#include<string>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    string str[100];
	    cin>>N;
	    for(int i=0;i<N;i++){
	        cin>>str[i];
	    }
	    int getArrayLength = sizeof(str) / sizeof(int);
        for (int i = 0; i < N; i++)
        {
            if (getArrayLength<=4)
            {
                cout<<"YES";
            }
            
        }
        
	}
	return 0;
}
