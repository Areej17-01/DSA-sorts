class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
    
    int n = prices.size();
    for (int i = 0; i < n; i++) {
		int curr = prices[i];
		int j = i+1;
		bool k = true;
		while (k == true and j < n) {
			
			if (prices[i] >= prices[j]) {
				
				prices[i] = prices[i] - prices[j];
				
				k = false;
			}
			j++;
		}}
      return(prices);
        
    }
};
