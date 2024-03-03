#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    vector<int> a;
    vector<int> b;
    vector<int>ans;

    cout<<"enter size of elements for 1st array"<<endl;
    int limit;
    cin>>limit;

    int num1;
    int num2;
    cout<<"enter elements for 1sr array"<<endl;
    for(int i=0; i<limit; i++){
        cin>>num1;
        a.push_back(num1);
    }

    cout<<"enter size of elements for2nd array"<<endl;

    int limit2;
    cin>>limit2;

    cout<<"enter the elements for 2nd array"<<endl;

    for(int i=0; i<limit2; i++){
        cin>>num2;
        b.push_back(num2);
    }
    
    int as=a.size();
    int bs=b.size();

    int whole=as+bs;

    for(int i=0; i<as; i++){
        ans.push_back(a[i]);
    }

    for(int i=0; i<bs; i++){
        ans.push_back(b[i]);
    }

    sort(ans.begin(), ans.end());

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    int ans_size= ans.size();

    float ans_size_half = ans_size/2;

    double median;

    int high = ans_size-1;
    int low = 0;

    

    if(ans_size%2!=0){
        median = (ans[high] + ans[low])/2.0;
        cout<<median<<endl;
    }

    else{
        float okay = (ans[high] + ans[low])/2.0;

        int mid1st = floor(okay);
        int mid2nd = ceil(okay);

        median= (mid1st+mid2nd)/2.0;
        cout<<median<<endl;
    }
}