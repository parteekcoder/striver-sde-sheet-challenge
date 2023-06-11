// class Pair{
//     int first;
//     int second;
//     Pair(int a,int b){
//         first=a;
//         second=b;
//     }
// }
// class Solution {
//     int f(int prices[],int i,int n,int stock){
//         if(i>=n) return 0;
//         if(stock==-1)return Math.max(-prices[i]+f(prices,i+1,n,1),f(prices,i+1,n,-1));
//         return Math.max(f(prices,i+1,n,1),prices[i]);
//     }
    
//     public int maxProfit(int[] prices) {
//         int n=prices.length;
//        return f(prices,0,n,-1);  --recursive solution
        
        
//         int max=0;
//         brute force approch
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 max=Math.max(max,prices[j]-prices[i]);
//             }
//         }
//         TC O(nsquare) SC O(1)
        
        
//         Priority Queue  -- heap solution
//         PriorityQueue<Pair> pq=new PriorityQueue<>((a,b)->b.first-a.first);
//         for(int i=0;i<n;i++){
//             pq.add(new Pair(prices[i],i));
//         }
//         int i=0;
//         int max=0;
//        while(i<n){
//             Pair top=pq.peek();
//             if(i> top.second){ pq.poll();continue;} --if old index then                                                            --remove
//             max=Math.max(max,top.first-prices[i]);
//             i++;
//         }
        
//         TC O(nlogn) SC O(n)
        
//         simple solution
//         int mini=prices[0];
//         for(int i=1;i<n;i++){
//             max=Math.max(max,prices[i]-mini);
//             mini=Math.min(mini,prices[i]);
//         }
//         TC O(n) SC O(1)
//          return max;
//     }
// }