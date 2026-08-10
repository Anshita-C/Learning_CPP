#include <iostream>
using namespace std;

int main(){

     int nums[] = {12, 1, -24, 34, 27};
    int size = 6;
    int largest=INT_MIN; //= -infinity


    // for(int i=0; i<size; i++){
    //     if(nums[i]>largest){
    //         largest = nums[i];
    //     }
    // }

    for(int i=0; i<size; i++){
        largest = max(nums[i], largest);
    }
    cout << "largest = " << largest << endl;


    return 0;
}