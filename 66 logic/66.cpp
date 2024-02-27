// plus one
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> arr;
    int limit;
    cin>>limit;
    int num1;
    int i;

    for(i=0; i<limit; i++){
        cin>>num1;
        arr.push_back(num1);
    }

    int n = arr.size();

    int lastele = arr[n-1];

    arr.erase(arr.end()-1);

    lastele+=1;

    arr.push_back(lastele);


    int ans;
    int sizeofvec1;




    for(i=0; i<n; i++){
        if(arr[i]>=9){
            vector<int> vec1;
            ans=arr[i];
            while(ans>0){
                int digit = ans%10;
                vec1.push_back(digit);
                ans /=10;
            }
            // cout the elements present vec1
            sizeofvec1 = vec1.size();
            
            reverse(vec1.begin(),vec1.end());

            for(int w = 0; w<sizeofvec1; w++){
                cout<<vec1[w]<<" ";
            }
        }
        else{
            cout<<arr[i]<<" ";
        }
       
    }
    cout<<endl;
    
}





// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         for(int i = digits.size() - 1;i >= 0;i--){
//             if(digits[i] != 9){
//                 digits[i]++;
//                 return digits;
//             }
//             else
//                 digits[i] = 0;
//         }
//         digits.insert(digits.begin(),1);
//         return digits;
//     }
// };


// solved by own