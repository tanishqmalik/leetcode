#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;
    vector<int> temp;
    int limit;
    cin>>limit;
    int nums1;



    for(int i=0; i<limit; i++){
        cin>>nums1;
        nums.push_back(nums1);
    }

    int target;
    cin>>target;

    int n=nums.size();

    // int i=0;
    // int j=n-1;

    for(int i=0; i<n; i++){
        if(target==nums[i]){
            temp.push_back(i);
        }
    }




    cout<<temp.size()<<endl;

    for(int i=0; i<temp.size(); i++){
        cout<<temp[i]<<" ";
    }

}