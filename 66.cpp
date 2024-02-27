#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int limit;
    cin>>limit;
    int i,j,n;

    for(i=0; i<limit; i++){
        cin>>arr[i];
    }


    for(i=limit-1; i>=0; i--){
        if(arr[i]!=9){
            arr[i]++;
            break;
        }
        else{
            arr[i]=0;
        }
    }

    int arr2[100];

    if(arr[0]==0){
        arr2[0]=1;
        for(i=1; i<=limit; i++){
            arr2[i]=arr[i-1];
        }
    }
    for(i=0; i<limit+1; i++){
        cout<<arr2[i]<<" ";
    }
}