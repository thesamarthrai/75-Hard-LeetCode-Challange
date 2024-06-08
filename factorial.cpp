#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    if(num==0) return 1;
    return fact(num-1)*num;
}

int main(){
fact(100);
    return 0;
}