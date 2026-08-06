#include <iostream>
using namespace std;

int main(){
    // Method 1: using loops
    // int n;
    // cout << "your number: ";
    // cin >> n;

    // if (n <= 0) {
    //     cout << "It's not a power of two\n";
    //     return 0;
    // }
    
    // int num=1;
    // bool powOfTwo=true;
    // while (num<=n){
    //     if(n%num!=0){
    //         powOfTwo=false;
    //     }
    //     num*=2;
    // }
    // if (powOfTwo){
    //     cout << "It's a power of two\n";
    //     } else {
    //         cout << "It's not a power of two\n";
    //     }


    //Method 2: Using bitwise operators
    int n;
    cout << "your number: ";
    cin >> n;
    if(n>0 && (n & (n-1)) == 0){
        cout << "It's a power of two\n";
    } else{
        cout << "It's not a power of two\n";
    }


    return 0;
}