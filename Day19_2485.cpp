class Solution {
public:
    int pivotInteger(int n) {
        int store =-1;
        int count1 =0;
        for(int i=1;i<=n;i++){
            count1= count1+i;
            int count2= 0;
            for(int j=i;j<=n;j++){
                count2=count2+j;
            }
            if(count1 == count2){
                store =i;
                break;
                }
            
        }
        if(store == -1){
            return -1;
        }else{
            return store;
        }
    }

// class Solution {
// public:
//     int pivotInteger(int n) {
//         int store =-1;
//         int count1 =0;
//         for(int i=1;i<=n;i++){
//             count1= count1+i;
//             int count2= 0;
//             for(int j=i;j<=n;j++){
//                 count2=count2+j;
//             }
//             if(count1 == count2){
//                 store =i;
//                 break;
//                 }
            
//         }
//         if(store == -1){
//             return -1;
//         }else{
//             return store;
//         }
//     }
// };