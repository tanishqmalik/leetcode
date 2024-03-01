// class Solution {
// public:
//     vector<int> buildArray(vector<int>& nums) {
//         vector<int> temp;
//         int n=nums.size();
//         int index;

//         for(int i=0; i<n; i++){
//             temp.push_back(nums[i]);
//         }

//         for(int i=0; i<n; i++){
//             nums.pop_back();
//         }

//         for(int i=0; i<temp.size(); i++){
//             index= temp[i];
//             nums.push_back(temp[index]);
//         }
//         return nums;
//     }
// };