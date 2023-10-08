class Solution {
public:
    string addStrings(string num1, string num2) {
       long long int n1,n2,n3;
        string result;
        n1 = stoi(num1); // string to integer num1
        n2 = stoi(num2); // string to inetger num2
        n3 = n1 + n2;
        result = to_string(n3);  // function to convert integer to string
        return result;
    }
};


// This is the another Solution for larger numbers


// class Solution {
// public:
//     string addStrings(string num1, string num2) {
//         try {
//             long long int n1, n2, n3;
//             string result;

//             // Check if num1 and num2 are not empty
//             if (num1.empty()) n1 = 0;
//             else n1 = stoll(num1); // Convert string to long long int

//             if (num2.empty()) n2 = 0;
//             else n2 = stoll(num2); // Convert string to long long int

//             n3 = n1 + n2;

//             // Check if the addition result is within the range of a long long int
//             if (n3 >= LLONG_MIN && n3 <= LLONG_MAX) {
//                 result = to_string(n3); // Convert long long int to string
//                 return result;
//             } else {
//                 return "Result out of range";
//             }
//         } catch (const std::out_of_range& e) {
//             return "Input out of range";
//         }
//     }
// };
