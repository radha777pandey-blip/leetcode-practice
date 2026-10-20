class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
       unordered_set<int>sp;
       for(int i=0;i<n;i++)
       {
          if(sp.find(nums[i])!=sp.end())
          {
            return nums[i];
          }
        sp.insert(nums[i]);
         
       }
        
    return -1;
    }
};