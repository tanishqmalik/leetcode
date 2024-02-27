// plus one
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr;
    int limit;
    cin>>limit;
    int num1;
    int i;

    for(i=0; i<limit; i++){
        cin>>num1;
        arr.push_back(num1);
    }

    int n = arr.size();

    int lastele = arr[n-1];

    arr.erase(arr.end()-1);

    lastele+=1;

    arr.push_back(lastele);




    for(i=0; i<n; i++){
        if(arr[i]>9){
            while(arr[i]!=0){
                int ans =arr[i];
                int mod= ans%10;
                ans = ans/10;
                arr.push_back(mod);
                cout<<arr[i]<<" ";
            }
        }
        cout<<arr[i]<<" ";
    }
    
}
