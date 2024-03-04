// class Solution {
// public:
//     vector<int> shuffle(vector<int>& nums, int n) {
//         vector<int> nums1;
//         vector<int> nums2;
//         vector<int> temp;

//         int doublelimit= n*2;

//         for(int i=0; i<doublelimit; i++){
//             temp.push_back(nums[i]);
//             nums.pop_back();
//         }


//         for(int i=0; i<n; i++){
//             nums1.push_back(temp[i]);
            
//         }
//         for(int i=n; i<doublelimit; i++){
//             nums2.push_back(temp[i]);
//         }

//         for(int i=0; i<n; i++){
//             nums.push_back(nums1[i]);
//             nums.push_back(nums2[i]);
//         }

//         return nums;
//     }
// };