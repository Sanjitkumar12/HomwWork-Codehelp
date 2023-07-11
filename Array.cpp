#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 10, 7, 15, 2, 3, 5, 7, 6, 1, 81};
    int arrsize = 11;

    int start = 0;
    int end = arrsize - 1;
    while(start < end){
        if(start == end){
            cout << arr[start]<<" ";
        }
        else {
            cout << arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
}