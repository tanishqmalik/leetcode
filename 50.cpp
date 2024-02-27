// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     float input;
//     cin>>input;

//     double power;
//     cin>>power;

//     float ans = pow(input,power);

//     cout<<ans<<endl;

// }


class Solution {
public:
    double myPow(double x, int n) {
        double ans = pow(x,n);
        return ans;
    }
};