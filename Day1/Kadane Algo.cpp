class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0,maxSum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(currSum>=0){
                currSum+=nums[i];
            }
            else{
                currSum=nums[i];
            }
            maxSum=max(currSum,maxSum);
            
        }
        return maxSum;}
        
};
