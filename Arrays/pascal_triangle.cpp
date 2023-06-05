#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 //brute force
    // public List<Integer> helper(int n){
    //     if(n==1){
    //         List<Integer>temp=new ArrayList<>();
    //         temp.add(1);return temp;
    //     }
    //     List<Integer>temp=new ArrayList<>();
    //     List<Integer>prev=helper(n-1);
    //     temp.add(1);
    //     for(int i=1;i<prev.size();i++){
    //         temp.add(prev.get(i)+prev.get(i-1));
    //     }
    //     temp.add(1);
    //     return temp;
    // }



    // public List<List<Integer>> generate(int numRows) {
    //     List<List<Integer>>ans=new ArrayList<>();
        // for(int i=1;i<=numRows;i++){
        //     ans.add(helper(i));
        // }
        // return ans;
    // }
class Solution {
public:

    vector<vector<int>> generate(int n) {
        vector<vector<int>>dp(n);
        dp[0] = vector<int>(1,1);
        for(int i=1;i<n;i++){
            vector<int> temp;
            temp.push_back(1);
            for(int j=1;j<i;j++){
               temp.push_back(dp[i-1][j]+dp[i-1][j-1]);
            }
            temp.push_back(1);
            dp[i]=temp;
        }
        return dp;
    }
};
int main(){
    int n;cin>>n;
    Solution obj = Solution();
    obj.generate(n);
    return 0;
}