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



    for(int i=0; i<n; i++){
        if(nums[i]!=0){
            index++;
            nums1.push_back(nums[i]);
        }
    }




    for(int i=0; i<n; i++){
        if(nums[i]==0){
            nums1.push_back(nums[i]);
        }
    }

    for(int i=0; i<n; i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl;


    
}