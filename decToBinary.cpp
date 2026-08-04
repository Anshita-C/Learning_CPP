#include <iostream>
using namespace std;

//conversion of a decimal number to binary number
int decToBinary(int n){
    int ans=0;
    int pow = 1; //10^0=1
    while(n > 0){
        int rem = n%2; 
        n/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}


int main(){
    int n;
    cout << "Your number: ";
    cin >> n;
    cout << decToBinary(n) << endl;

    return 0;
}