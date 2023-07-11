#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 10, 7, 15, 2, 3, 5, 7, 6, 1,81 };
    int arrsize = 11;

    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < arrsize; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<"max: "<<max<<endl;
    cout<<"min: "<<min<<endl;
}