#include<bits/stdc++.h>
using namespace std;

void func(int n){
    if(n==0) return;
    cout<<n<<endl;
    func(n-1);
}

int main(){

    func(100);

    return 0;
}
