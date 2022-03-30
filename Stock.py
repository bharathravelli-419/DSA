class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_profit = 0
        min_element =prices[0]
        for i in range(len(prices)):
            min_element = min(min_element,prices[i])
            max_profit  = max(max_profit,prices[i]-min_element)
        return max_profit
