// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         vector<int> temp;
//         int sum=0;
//         int n = nums.size();
//         for(int i=0; i<n; i++){
//             temp.push_back(nums[i]);
//         }

//         for(int i=0; i<n; i++){
//             nums.pop_back();
//         }

//         for(int i=0; i<n; i++){
//             sum=sum+temp[i];
//             nums.push_back(sum);
//         }

//         return nums;
//     }
// };