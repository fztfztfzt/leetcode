/*
Best Time to Buy and Sell Stock II
Total Accepted: 62105 Total Submissions: 158110 Difficulty: Medium

Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).

https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
*/
8ms this question is a joke
int maxProfit(vector<int>& prices) {
        int total = 0;
        int l =prices.size();
        for (int i=0; i< l-1; i++) {
            if (prices[i+1]>prices[i]) total += prices[i+1]-prices[i];
        }

        return total;
    }