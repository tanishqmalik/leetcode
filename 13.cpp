#include <iostream> 
#include <string>
using namespace std;


int main(){
    string s;
    getline(cin,s);
    int i;
    int size= s.size();
    int num1,num2,num3,num4,num5,num6,num7;

    for(i=0; i<size; i++){
        if(s[i]=='I'){
            // s[i]='1';
            num1=1;
        }
        else if(s[i]=='V'){
            // s[i]='5';
            num2=5;
        }
        else if(s[i]=='X'){
            // s[i]='10';
            num3=10;
        }

        else if(s[i]=='L'){
            // s[i]='50';
            num4=50;
        }

        else if(s[i]=='C'){
            // s[i]='100';
            num5=100;
        }

        else if(s[i]=='D'){
            // s[i]='500';
            num6=500;
        }
        else{
            // s[i]='1000';
            num7=1000;
        }
    }

    for(i=0; i<size; i++){
        cout<<s[i]<<"";
    }

}