#include<iostream>
using namespace std;
void reverseArrays(int arr[],int size){
    for(int i=size-1;i>=0;i--){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[] = {1, 10, 7, 15, 2, 3, 5, 7, 6, 1, 81};
    int arrsize = 11;
    reverseArrays(arr, arrsize);
}