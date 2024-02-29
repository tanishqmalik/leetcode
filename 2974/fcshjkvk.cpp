#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1;
    vector<int>temp;

    cout<<"enter limit for vector"<<endl;
    int limit;
    cin>>limit;

    int element;

    cout<<"enter elements"<<endl;
    for(int i=0; i<limit; i++){
        cin>>element;
        vec1.push_back(element);
    }

    int n=vec1.size();

    for(int i=0; i<n; i++){
        temp.push_back(vec1[i]);
    }


    // sort(temp.begin(),temp.end());


    cout<<"temp elements"<<endl;
    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;


    for(int i=0; i<n; i++){
        vec1.pop_back();
    }

    cout<<"size of vec1 rn: "<<vec1.size()<<endl;


    int loopcnt = n/2;

    if(loopcnt==1){  //agr loopcnt 1 hai tooo seedha push maaro aur print krwayo

        if(temp[0]>temp[1]){  //agar pehla ele bda hai dossre to sort kro push kro for e.g: inp:- 2,1 , out:-2,1
            sort(temp.begin(),temp.end());
            vec1.push_back(temp[1]);   
            vec1.push_back(temp[0]);

            for(int i=0; i<vec1.size(); i++){
                cout<<vec1[i]<<" ";
            }
            cout<<endl;

        }
        else{
            vec1.push_back(temp[1]);//else
            vec1.push_back(temp[0]);  //pehle do elements ko push krwaya agr loopcnt 1 hai to aur elements print krwaye

            for(int i=0; i<vec1.size(); i++){
                cout<<vec1[i]<<" ";
            }
            cout<<endl;

        }

    }
    else{

        sort(temp.begin(), temp.end());

        for(int i=0; i<loopcnt; i++){
            vec1.push_back(temp[1]);   // pehle do elements ko push krwaya agr loopcnt 1 se jayda hai
            vec1.push_back(temp[0]);

            temp.erase(temp.begin()+1);  //aur unhi elements ko remove krta gya 
            temp.erase(temp.begin());
        }
        for(int i=0; i<vec1.size(); i++){
            cout<<vec1[i]<<" ";
        }
        cout<<endl;
    }

}


// boht mehnat ke baad hua takriban aadhaa din lga