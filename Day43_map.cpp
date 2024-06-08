#include<bits/stdc++.h>
using namespace std;

int main(){
    int size ;
    cout<<"Enter the size of the strings here : ";
    cin>>size;
    map<string , int>m1;
    for(int i=0;i<size;i++){
        string str;
        cout<<"Enter the string here : ";
        cin>>str;
        m1[str]++;
        // m1.insert({str,i});
    }

    map<string,int>:: iterator it;

    for(it = m1.begin();it != m1.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}
