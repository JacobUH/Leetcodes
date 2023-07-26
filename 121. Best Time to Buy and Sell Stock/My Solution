class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int leftPointer = 0;
        int rightPointer = 0;

        while (rightPointer < n){
            if (prices[leftPointer] < prices[rightPointer]){
                profit = max(profit, prices[rightPointer] - prices[leftPointer]);
            }  
            else{
                leftPointer = rightPointer;
            }
            rightPointer++;
        }

        return profit;
    }
};
