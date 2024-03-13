// #include <iostream>
// using namespace std;

// int main(){
//     string s;
//     getline(cin, s);
//     int u;
//     int index=0;

//     // cout<<s.size();

//     for(int i=s.size(); i>=0; i--){
//         if(s[i]==' '){
//             // cout<< i<<endl;
//             u=i;
//             // cout<<s[u+1]<<endl;
//             // cout<<s.size()<<endl;
//             for(int k =u+1; k<s.size(); k++){
//                 s[k]=toupper(s[k]);
//                 index++;
//             }
//             break;
//         }
//     }

//     cout<<index<<endl;
// }

#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string s;
    getline(cin , s);
    int indexu=0;

    int size= s.size();
    cout<<size<<endl;
    for(int i=0; i<s.size(); i++){
        while(s[size-i]==' '){
            indexu++;
        }
    }
    cout<<indexu<<endl;
}
