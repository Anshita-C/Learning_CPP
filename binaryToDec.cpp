#include <iostream>
using namespace std;

int binaryToDec(int n){
    int ans=0, pow = 1; //2^0=1
    while(n>0){
        int rem=n%10;
        ans+=rem*pow;
        n/=10;
        pow*=2;
    }
    return ans;
}

int main(){
    int n;
    cout << "Your number: ";
    cin >> n;
    cout << binaryToDec(n) << endl;


    return 0;
}