#include <iostream>
using namespace std;

int revAnInt(int n){
    int ans = 0;
    while(n!=0 ){
        int lastDig=n%10;
        n/=10;
        ans = (ans*10) + lastDig;
    }
    return ans;
}

int main(){
    int n;
    cout << "your number: ";
    cin >> n;

    cout << revAnInt(n) << endl;

    return 0;
}