#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int arr[5];
    long int count1=0;
    long int count2=0;
	
	for(int i=0; i<5;i++){
	    cin>>arr[i];
	}

    long int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + n);
    
	for (int i = 0; i < 4; i++)
    {
        count1+=arr[i];
    }
    for (int i = 1; i <5 ; i++)
    {
        count2+=arr[i];
    }
    
    cout<<count1<<" "<<count2<<endl;
    

	return 0;
}
