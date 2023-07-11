#include<iostream>
#include<cstring>
using namespace std;
int main(){

    int arr[5];
    memset(arr, 1, sizeof(arr));
    // for(int i=0; i<5; i++){
    //     arr[i] = 1;
    // }
    for(int i=0; i<5; i++){
        cout << arr[i];
    }

    // int arr[5];
    // for(int i=0; i<5; i++){
    //     cin >> arr[i];
    // }
    // for(int i=0; i<5; i++){
    //     cout << arr[i]*2<<" ";
    // }
}