// brute
#include <iostream>
using namespace std;

int main(){
    int n;

    cin>>n;
    int e;

    if(n<=0){
        cout<<"no";
    }

    while(n%3==0){
        n=n/3;
    }

    cout<<n<<endl;

    if(n==1){
        cout<<"ok";
    }
    else{
        cout<<"no";
    }
}