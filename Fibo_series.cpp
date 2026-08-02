#include <iostream>
using namespace std;

//print the fibonacci series till n
void fiboSeries(int n){
    int num2 = 1;
    int num1 = 0;
    while(num1 <= n){
        cout << num1 << " ";
        int sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
}

int main(){

    int n;
    cout << "your number: ";
    cin >> n;
    fiboSeries(n);

    return 0;
}