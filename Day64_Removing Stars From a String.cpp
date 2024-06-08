// // Removing Stars From a String

// // Input: s = "leet**cod*e"
// // Output: "lecoe"

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){

// int t;
// cin>>t;
// while (t--)
// {
//     string str;
//     cin>>str;
//     while(1){
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i]=='*')
//         {
//             str.erase(str.begin()+i);
//             str.erase(str.begin()+i-1);
//         }
//           cout<<str;
//     }
//     }
// }
//     return 0;
// }

// Removing Stars From a String

// Input: s = "leet**cod*e"
// Output: "lecoe"

#include<iostream>
#include<string>
using namespace std;

int main(){

int t;
cin>>t;
while (t--)
{
     string str;
    cin>>str;
    while(1){

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]=='*')
        {
            str.erase(str.begin()+i);
            str.erase(str.begin()+i-1);
        }
    }
     cout<<str<<endl;
    }
    }
    return 0;
}