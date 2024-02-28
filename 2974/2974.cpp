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

    int n=nums.size();

    for(int i=0; i<n; i++){
        temp.push_back(nums[i]);
    }

    for(int i=0; i<n; i++){
        nums.pop_back();
    }

    // sort(temp.begin(), temp.end());

    int tempkasize= temp.size();

    int loopcnt = tempkasize/2; 

    for(int i=0; i<loopcnt; i++){
        sort(temp.begin(), temp.end()); //sort kia


        nums.push_back(*temp.begin()+1);
        nums.push_back(*temp.begin());    //pehle do elements ko push krwaya 


        temp.erase(temp.begin()+1);
        temp.erase(temp.begin());      //pehle do elements ko remove krwaya....

        // cout<<temp.size()<<endl;
    }


    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;



}

// by own