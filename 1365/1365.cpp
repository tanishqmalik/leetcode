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

    int cnt=0;


    for(int h=0; h<n; h++){
        cnt=0;

        for(int i=0; i<n; i++){

            for(int j=i+1; j<n; j++){

                if(nums[i]>nums[j] && i!=j){
                    cnt++;
                }
                else{
                    cnt=0;
                }

            }
            temp.push_back(cnt);
        }
    }


    // cout<<cnt<<endl;


    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }

}