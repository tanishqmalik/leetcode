#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;
    int limit;
    cin>>limit;
    int nums1;

    int i;

    for(i=0; i<limit; i++){
        cin>>nums1;
        nums.push_back(nums1);
    }

    int n=nums.size();

    int swap1;
    cin>>swap1;

    for(i=1; i<n; i++){
        swap(nums[i],nums[swap1]);
    }

    for(i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }

}