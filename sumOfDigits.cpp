#include <iostream>
using namespace std;

//sum of digits of a number
int sumDig(int x){
    int sum=0;
    while(x>0){
        int lastDig = x%10;
        x/=10;
        sum+=lastDig;
    }
    return sum;
}

int main(){
    int n;
    cout << "your number: ";
    cin >> n;
    cout << sumDig(n) << endl;
    return 0;
}