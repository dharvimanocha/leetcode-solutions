class Solution {
public:
    int minElement(vector<int>& nums) {
        int x;
        int rem;
    

        for (int i=0;i<nums.size();i++)
        {
            int sum=0;
            x=nums[i];
            while(x>0)
            {
                rem=x%10;
            sum+=rem;
            x=x/10;
            }
        
           nums[i]=sum;

        } 
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            ans = min(ans, nums[i]);
        }
        
        return ans;
    }

        
    
};