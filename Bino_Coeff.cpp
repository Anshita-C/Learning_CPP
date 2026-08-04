#include <iostream>
using namespace std;

//factorial of n
int fac(int n){
    int prod=1;
    for(int i=1; i<=n; i++){
        prod=prod*i;
    }
    return prod;
}

//Binomial Coefficient 
int nCr(int n, int r){
    return (fac(n))/(fac(n-r)*fac(r));
}


int main(){
    int n, r;
    cout << "Your n: ";
    cin >> n;
    cout << "Your r: ";
    cin >> r;
    cout << nCr(n, r) << endl;

    return 0;
}