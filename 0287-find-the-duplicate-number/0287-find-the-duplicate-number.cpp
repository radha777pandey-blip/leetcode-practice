class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
       unordered_map<int,int>mp;
       mp[0]=-1;
       for(int i=0;i<n;i++)
       {
          if(mp.find(nums[i])!=mp.end())
          {
            return nums[i];
          }
          mp.insert({nums[i],i});
         
       }
        
    return -1;
    }
};