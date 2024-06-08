#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int count=0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]==str.at(0))
        {
           count++;
           continue;
        }
        
    }
    cout<<count;

    return 0;
}//sample example = abacaba, gizfdfri


