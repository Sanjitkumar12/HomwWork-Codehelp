#include<bits/stdc++.h>
using namespace std;

int nearlySorted(vector<int> arr,int target){
    int s = 0;
    int e = arr.size() - 1;

    while(s<e){
    int mid = s + (e - s) / 2;
    if(arr[mid]==target){
            return mid;
    }
    // if(arr[mid-1]==target){
    //     return mid - 1;
    // }
    // if(arr[mid+1]==target){
    //     return mid + 1;
   // }
    if(arr[mid]>target){
        //left search
        e = mid - 1;
    }
    else{
        s = mid + 1;
    }
    }
    return -1;
}
int main(){
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 3;
    int ans = nearlySorted(arr, target);
    if(ans==-1){
        cout << "Not found" << endl;
    }
    else{
        cout<<"Index is "<<ans<<endl;
    }
}