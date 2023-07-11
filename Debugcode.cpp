#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int candidate, count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
        }
        else if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    // Additional step to verify if candidate is a majority element
    int majorityCount = 0;
    for(int num:nums){
        if(num==candidate){
            majorityCount++;
        }
    }
    if(majorityCount>nums.size()/2){
      return candidate;
    }
    else {
      return -1;//No majority element
    }
}
int main()
{
    vector<int> nums = {1, 1, 3, 3, 2, 4, 2};
    int result=majorityElement(nums);
    if(result!=-1){
        cout<<"majorityElement is "<<result<<endl;
    }
    else {
        cout<<"No majority element found"<<endl;
    }
    return 0;
}