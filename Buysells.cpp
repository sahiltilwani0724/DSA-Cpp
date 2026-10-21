--leetcode 121--

  class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=0;
        int s=b+1;

        int max=0;
        while(s<prices.size()){
            int profit=prices[s]-prices[b];
            if(profit>max){
                max=profit;
            }
            if(prices[s]<prices[b]){
                b=s;
            }
            s++;
        }
        return max;
    }
};
