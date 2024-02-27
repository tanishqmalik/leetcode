#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int limit;
    cin>>limit;

    int elementofind;
    cin>>elementofind;
    int temp =0 ;

    int i, j;

    for(i=0; i<limit; i++){
        cin>>arr[i];
    }


    for(i=0; i<limit; i++){
        for(j=i+1; j<limit; j++){
            if(arr[j]==elementofind){
                if(arr[j]==arr[i]){
                    temp++;
                }
            }
        }
    }

    cout << temp<< endl;
}