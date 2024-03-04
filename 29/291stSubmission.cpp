class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> temp;
        int start= -1;
        int end = -1;
        int n=nums.size();

        


        for(int i=0; i<n; i++){
            if(target==nums[i]){
                start=i;
                break;
            }
        }

        for(int i=n; i>0; i--){
            if(target==nums[i]){
                end=i;
                break;
            }
        }
        temp={start,end};

        return temp;
        

    }
};