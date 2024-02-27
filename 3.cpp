#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int i,j;

    int size= s.size();

    int count;

    for(i=0; i<size; i++){
        string temp;
        for(j=i; j<size; j++){
            if(s[size-i]!=s[size-i-1] && ){
                temp.push_back(s[j]);
                count++;
            }
            cout<<count<<" ";
        }
    }
    
}