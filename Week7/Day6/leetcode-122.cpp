/*122. Best Time to Buy and Sell Stock II
Say you have an array prices for which the ith element is the price of a given stock on day i.
Design an algorithm to find the maximum profit. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).
Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).*/

int maxProfit(vector<int>& a) {
        int ans=0;
        for(int i=0;i<a.size()-1;i++){
            if(a[i]<a[i+1]){
                ans+=a[i+1]-a[i];
            }
        }
        return ans;
    }