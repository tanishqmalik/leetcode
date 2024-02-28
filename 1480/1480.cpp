#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;
    vector<int> temp;
    int limit;
    cin>>limit;
    int nums1;
    int sum=0;



    for(int i=0; i<limit; i++){
        cin>>nums1;
        nums.push_back(nums1);
    }

    int n=nums.size();

    for(int i=0; i<n; i++){
        temp.push_back(nums[i]);
    }

    for(int i=0; i<n; i++){
        nums.pop_back();
    }

    for(int i=0; i<n; i++){
        sum= sum+temp[i];
        nums.push_back(sum);
    }

    for(int i=0; i<n; i++){
        cout<<nums[i]<<endl;
    }

}

// by own