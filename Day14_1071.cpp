// class Solution {
// public:
//     string gcdOfStrings(string str1, string str2) {
//         int size1,size2;
//         int count = 0;
//         string main ="";
//         size1 = str1.size();
//         size2 = str2.size();
//         int it = min(size1,size2);
//         for(int i=0;i<it;i++){
//            for(int j=i;j<it;j++){
//                if(str1[i]==str2[j]){
//                    count++;
//                }else{
//                    continue;
//                }
//            }
//         }

//             if(count == 0){
//             return main;
//         }else if(count !=0){
//             for(int i=0;i<count;i++){
//                 main+=str1[i];
//             }
//         }
//         return main;
//     }
// };

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 != str2+str1)
            return "";
        if(str1 == str2)
            return str1;
        string res="";
        int g = gcd(str1.size(), str2.size());
        for(int i=0; i<g; i++){
            if(str1[i] != str2[i])
                break;
            else
                res += str1[i];
        }
        return res;
    }
};