#include <iostream>
using namespace std;

int main() {
  int T;
  cin>>T;
  int A,B,C,X;
  while(T--){
      cin>>A>>B>>C>>X;
      if(A+B>X || A+B == X){
          cout<<"\nYES";
      }else if(A+C>X || A+C == X){
          cout<<"\nYES";
      }else if(B+C>X || B+C == X){
          cout<<"\nYES";
      }else{
          cout<<"\nNO";
      }
  }
	return 0;
}
