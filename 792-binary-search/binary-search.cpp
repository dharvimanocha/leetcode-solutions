class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==target)
            {ans=m;
                 return m;
            }
           
            if(nums[m]>target)
            {
                e=m-1;
            }
            if(nums[m]<target)
            {
                s=m+1;
            }
        } return ans;
    }
};