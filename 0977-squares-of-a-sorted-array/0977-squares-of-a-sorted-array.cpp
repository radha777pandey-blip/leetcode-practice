class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
          
            nums[i]=nums[i]*nums[i];
            ans.push_back(nums[i]);
        }
        for(int j=0;j<ans.size();j++)
        {
            for(int k=j+1;k<ans.size();k++)
            {
                if(ans[j]>ans[k])
                {
                    swap(ans[j],ans[k]);
                }
            }
        }
        
        return ans;
    }
};