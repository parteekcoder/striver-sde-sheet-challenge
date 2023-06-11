#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;
class Solution
{
//      const n = arr.length; // size of the array

//   //sort the given intervals:
//   arr.sort((a, b) => a[0] - b[0]);

//   const ans = [];

//   for (let i = 0; i < n; i++) { // select an interval:
//     let start = arr[i][0];
//     let end = arr[i][1];

//     //Skip all the merged intervals:
//     if (ans.length && end <= ans[ans.length - 1][1]) {
//       continue;
//     }

//     //check the rest of the intervals:
//     for (let j = i + 1; j < n; j++) {
//       if (arr[j][0] <= end) {
//         end = Math.max(end, arr[j][1]);
//       } else {
//         break;
//       }
//     }
//     ans.push([start, end]);
//   }
//   return ans;
    public:
    static bool compare(vector<int>a,vector<int>b){
        if(a[1]==b[1]) return a[0] < b[0];
        return a[1] < b[1];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       int n = intervals.size();
        sort(intervals.begin(), intervals.end(), compare);
        vector<vector<int>> ans;
        int low = intervals[0][0], high = intervals[0][1];
        ans.push_back({low, high});
        for (int i = 1; i < n; i++)
        {
            low=intervals[i][0];
            high=intervals[i][1];
            while (!ans.empty() && ans.back()[1] >= low)
            {
                low = min(low, ans.back()[0]);
                ans.pop_back();
            }
            ans.push_back({low, high});
        }
        return ans;
    }
};