#include<iostream>
using namespace std;
int main(){
    //only 0 or 1 numbers
    int arr[] = {1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int arrsize = 15;

    int num1 = 0;
    int num0=0;
    for(int i = 0; i <15; i++){
       if(arr[i] == 0){
        num0++;
       }
       if(arr[i] == 1){
        num1++;
       }
    }
    cout << num0 << endl;

    cout << num1 << endl;
}