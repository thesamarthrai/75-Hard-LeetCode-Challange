// class Solution {   //In this method I don't know why it is giving Error
// public:
//     int countAsterisks(string s) {
//         vector<int>v1;
//         // int line_count = 0;
//         int count1 = 0;
//         int count2 = 0;
//         int line_count=0;
//         for(int i=0;i<s.size();i++){
//             if(s[i]=="|"){
//                 v1.push_back(i);
//                 line_count++;
//             }
//         }

//              if(line_count==0){
//                 for(int i=0;i<s.size();i++){   // for zero line
//                     if(s[i]=="*"){
//                         count1++;
//                     }
//                     return count1;
//                 }
//             }else{
//                 for(int i=0;i<s(v1[0]);i++){
//             if(s[i]=="*"){
//                 count1++;
//             }
//         }
         
//         int j=1;
//         for(int i =1;i<v1.size();i =i+2){
//             for(j = s(v1[i]); j<s(v1[i+1]); j++){  //My approaches
//             if(s[j]=="*"){
//                 count2++;
//             }
//         }
//         }
//        int count 3;
//        count3 = count1+count2;
//        return count3;
//             }

        
//     }
// };



// Another Method getting Error after resolving upper Error

// class Solution {
// public:
//   int countAsterisks(string s) {
//     vector<int> v1;
//     int count1 = 0;
//     int count2 = 0;
//     int line_count = 0;

//     for (int i = 0; i < s.size(); i++) {
//       if (strcmp(&s[i], "|") == 0) {
//         v1.push_back(i);
//         line_count++;
//       }
//     }

//     if (line_count == 0) {
//       for (int i = 0; i < s.size(); i++) {  // for zero line
//         if (strcmp(&s[i], "*") == 0) {
//           count1++;
//         }
//       }
//       return count1;
//     } else {
//       for (int i = 0; i < s.at(v1[0]); i++) {   //Another approach
//         if (strcmp(&s[i], "*") == 0) {
//           count1++;
//         }
//       }

//       int j = 1;
//       for (int i = 1; i < v1.size(); i = i + 2) {
//         for (j = s.at(v1[i]); j < s.at(v1[i + 1]); j++) {
//           if (strcmp(&s[j], "*") == 0) {
//             count2++;
//           }
//         }
//       }

//       int count3;
//       count3 = count1 + count2;
//       return count3;
//     }
//   }
// };

//The correct solution of the problem

class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0;
        int brace = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='|' && brace!=1) brace=1;
            else if(s[i]=='*' && brace!=1) ans++;
            else if(s[i]=='|' && brace==1) brace=0;
        }
        return ans;
    }
};
