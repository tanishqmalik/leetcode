// brute

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;
    int limit;
    cin>>limit;
    int num1;

    for(int i=0; i<limit; i++){
        cin>>num1;
        nums.push_back(num1);
    }
    int n = nums.size();

    // for(int i=0; i<n; i++){
    //     cout<<nums[i]<<" ";
    // }
    // cout<< endl;

    for(int i=0; i<n*2; i++){
        nums.push_back(nums[i]);
    }

    for(int i=0; i< n*2; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}