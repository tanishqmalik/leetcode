#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;
    int limit;
    cin>>limit;
    int nums1;

    int n=nums.size();

    for(int i=0; i<n; i++){
        cin>>nums1;
        nums.push_back(nums1);
    }

}