#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        if(nums[high]==2){
            high--;
        }else{
            if(nums[low]<nums[high]){
                low++;
            }else if(nums[low]>nums[high]){
                swap(nums[low],nums[high]);
                low++;
            }else{
                if(nums[low]==0) low++;
                else ;
            }
        }
    }
};
int main(){

    return 0;
}