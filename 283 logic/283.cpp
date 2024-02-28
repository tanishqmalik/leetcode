// brute 


#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> nums;
    vector<int> nums1;
    int limit,num1,n;
    cin>>limit;

    for(int i=0; i<limit; i++){
        cin>>num1;
        nums.push_back(num1);
    }

    n= nums.size();


    int cnt=0;
    int index=0;


// jo 0 nahi hai unko push krwaya
    for(int i=0; i<n; i++){
        if(nums[i]!=0){
            nums1.push_back(nums[i]);
        }
    }

// uske baad jo zero hai, unko push krwaya
    for(int i=0; i<n; i++){
        if(nums[i]==0){
            nums1.push_back(nums[i]);
        }
    }

    for(int i=0; i<n; i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl;

    // to delete
    
    // while (!nums1.empty()) {
    //     nums1.pop_back();
    // }
    // for(int i = 0; i<nums1.size(); i++){
    //     cout<<nums1[i]<<" ";
    // }



    
}

// by own