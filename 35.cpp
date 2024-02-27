class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int high = n-1;
        int low = 0;
        int ans;

        while(low<=high){
            int mid= (low+high)/2;

            if(target<=nums[mid]){
                ans=mid;
                high=mid-1;
            }
            else{
                low= mid +1;
            }
        }
        return ans;
    }
};