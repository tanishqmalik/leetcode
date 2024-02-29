#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;
    int limit;
    cin>>limit;
    int nums1;
    int cnt=0;



    for(int i=0; i<limit; i++){
        cin>>nums1;
        nums.push_back(nums1);
    }

    int n=nums.size();

    int i=1;
    int j=n-1;

    while(i<=j){
        if(nums[i]==nums[j]){
            if(i<j){
                cnt++;
            }
        }
        j--;
    }

    cout<<cnt<<endl;

}