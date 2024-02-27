class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int temp;
        for(int i=0; i<size; i++){
            if(target == nums[i]){
                return i;
            }
        }

        return -1;
    }
};