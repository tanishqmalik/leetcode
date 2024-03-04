#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;
    int limit;
    cin>>limit;
    int nums1;
    int cnt=0;



    for(int i=0; i<limit; i++){
        cin>>nums1;
        nums.push_back(nums1);
    }

    int n=nums.size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]==nums[j] && i<j){
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;

}





// class Solution {
// public:
//     int numIdenticalPairs(vector<int>& nums) {
//         int cnt=0;
//         for(int i=0; i<nums.size(); i++){
//             for(int j=i+1; j<nums.size(); j++){
//                 if(nums[i]==nums[j] && i<j){
//                     cnt++;
//                 }
//             }
//         }

//         return cnt;
//     }
// };