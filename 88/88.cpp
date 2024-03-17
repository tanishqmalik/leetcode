class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // vector<int> temp;

        // for(int i=0; i<m; i++){
        //     temp.push_back(nums1[i]);
        // }

        // nums1.clear();

        // for(int i=0; i<n; i++){
        //     temp.push_back(nums2[i]);
        // }

        // int newsize=temp.size();

        int j=0;

        for(int i=m; i<n+m; i++){
            nums1[i]=nums2[j];
            j++;
        }

        sort(nums1.begin(),nums1.end());
        
    }
};