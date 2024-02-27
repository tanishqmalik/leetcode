// agr ek number hai 10, to hm usko alag-alag print kese krvayenge???


#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr;
    int i;
    int n=10;
    int ans;

    for(i=0; i<2; i++){
        ans=n%10;
        // cout<<ans<<endl;
        n=n/10;
        arr.push_back(ans);
    }

    int size=arr.size();

    for(i=0; i<size; i++){
        cout<< arr[i]<<endl;
    }


}