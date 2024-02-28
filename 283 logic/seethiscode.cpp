class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> nums1;

        int index;


        int n=nums.size();

        // we had to return nums

        for(int i=0; i<n; i++){
            nums1.push_back(nums[i]);  // so firstly we stored all nums elements into nums1
        }

        while(!nums.empty()){
            nums.pop_back();     //after that we poped all nums elements 
        }

        

        for(int i=0; i<n; i++){
            if(nums1[i]!=0){
                nums.push_back(nums1[i]);  //after that pehle to  jo nums ke elements  0 nahi hai unko push kro 
            }
        }

        for(int i=0; i<n; i++){
            if(nums1[i]==0){
                nums.push_back(nums1[i]); // uske baad jo elements 0 hai unko push kroo
            }
        }
    }

};
