#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>

//int stl next_permutation(arr.begin(),arr.end());

using namespace std;
class Solution
{
public:
    // void nextPermutation(vector<int> &nums)
    // {
    //     int n = nums.size();
    //     bool isCompleted = true;
    //     for (int i = n - 2; i >= 0; i--)
    //     {
    //         int minGreater = INT_MAX;
    //         int minIndex = -1;
    //         for (int j = i + 1; j < n; j++)
    //         {
    //             if (minGreater > nums[j] && nums[j] > nums[i])
    //             {
    //                 minGreater = nums[j];
    //                 minIndex = j;
    //             }
    //         }
    //         if (minIndex == -1)
    //             continue;
    //         swap(nums[i], nums[minIndex]);
    //         sort(nums.begin() + i + 1, nums.end());
    //         isCompleted = false;
    //         break;
    //     }
    //     if (isCompleted)
    //         sort(nums.begin(), nums.end());
    // }
    void nextPermutation(vector<int>&nums){
        int n = nums.size();
        int index = -1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
    }
};
int main()
{

    return 0;
}