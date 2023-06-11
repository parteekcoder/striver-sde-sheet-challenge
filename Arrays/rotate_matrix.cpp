#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


class Solution {
public:
    void swapElement(vector<vector<int>>& matrix,int ele,int x,int y,int axis,int n,int size){
        if(axis==5) return;
        int next = matrix[y][size-1-x];
        matrix[y][size-1-x]=ele;
        swapElement(matrix,next,y,size-1-x,axis+1,n,size);
    }
    void solve(vector<vector<int>>& matrix,int x,int y,int n,int size){
        if(n==1 || n==0) return;
        for(int i=y;i<y+n-1;i++){
            swapElement(matrix,matrix[x][i],x,i,0,n,size);
        }
        solve(matrix,x+1,y+1,n-2,size);
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // solve(matrix,0,0,matrix.size(),matrix.size());
        // vector<vector<int>>arr(n,vector<int>(n,0));
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         arr[j][n-1-i] = matrix[i][j];
        //     }
        // }
        // TC nsqaure
        // SC nsqaure

        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }

    }
};
int main(){

    return 0;
}