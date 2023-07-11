#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,1,1,2,3,5,1,1,2,1};
    int size=10;

    int maxcount = 0;
    int index = -1;
    for(int i=0;i<10;i++){
     int count=0;
     for (int j = 0; j < 10;j++){
        if(arr[i]==arr[j]){
            count++;
            }
          if(count>maxcount){
            maxcount=count;
             index = i;
            }
        }
    }
    if (maxcount > 10 / 2)
        cout << arr[index] << endl;

    else
        cout << "No Majority Element" << endl;

}