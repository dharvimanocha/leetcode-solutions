class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int x;
        int sumsingle=0;
        int sumdouble=0;
        for(int i=0;i<nums.size();i++)
        {
        x=nums[i];

            if(x%10==x)
            {
                sumsingle+=x;
            }
            else
            {
                sumdouble+=x;

            }
        }
        if(sumsingle<sumdouble)
        {return true; 
       
        }
        if(sumsingle>sumdouble)
        {return true;
        }
        return false;
        
    }
};