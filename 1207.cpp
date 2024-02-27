#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int limit;
    cin>>limit;

    int elementofind;
    cin>>elementofind;

    int i, j;

    for(i=0; i<limit; i++){
        cin>>arr[i];
    }


    for(i=0; i<limit; i++){
        int temp=1;
        for(j=i+1; j<limit; j++){
            if(arr[j]==arr[i]){
                temp++; 
            }
        }
        if(temp>1){
            cout<<temp<<endl;
        }
    }

    return 0;
}