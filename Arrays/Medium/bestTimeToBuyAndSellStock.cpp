// Best time to buy and sell stock.

// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Example : 

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int profit = 0;

        for(int i=1; i<prices.size(); i++){
            int cost = prices[i] - mini;
            profit = max(cost, profit);

            mini = min(prices[i], mini);
        }
        return profit;
    }
};

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int buy = prices[0];                                // Using Kadane Algo.
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size()==0)
        return 0;

        int minprice=prices[0];
        int maxprofit=0;
        for(int i=1;i<prices.size();i++)                      // Usinf If Else.
        {
            if(prices[i]<minprice)
            {
                minprice=prices[i];
            }
            else{
                int profit=prices[i]-minprice;
                if(profit>maxprofit){
                  maxprofit=profit;
            }
            }
            
        }
        return maxprofit;
    }
};