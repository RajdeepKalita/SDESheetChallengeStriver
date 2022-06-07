

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pr=0,mi=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mi){
               mi=prices[i];
            }
            if(pr<prices[i]-mi){
                pr=prices[i]-mi;
            }
        }
        return pr;
    }
        
    
};
