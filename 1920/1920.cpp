#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;
    vector<int> temp;
    vector <int> ans;
    int limit;
    cin>>limit;
    int nums1;

    int index;



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

    // for(int i=0; i<n; i++){
    //     cout<<temp[i]<<" ";
    // }


    for(int i=0; i<temp.size(); i++){
        index=temp[i];
        nums.push_back(temp[index]);
    }

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;




}