#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

class Solution {
public:
    int replacePosition(vector<int>nums,int index,int ele){
        if(nums[index]==-1){
            nums[index]=ele;
            return 0;
        }
        if(nums[index]==ele) return ele;
        int temp=nums[index];
        nums[index]=ele;
        return replacePosition(nums,temp-1,temp);
    }
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        // 2 loops
        //visi array
        // sort array
        // sum of n numbers
        //place each element at correct place
        // for(int i=0;i<n;i++){
        //     if(nums[i]==i+1) continue;
        //     int pos = replacePosition(nums,i,-1);
        //     if(pos!=0) return pos;
        // }
    }
};