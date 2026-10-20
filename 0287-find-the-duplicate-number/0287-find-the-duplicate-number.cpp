class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
       unordered_set<int>sp;
       for(int i=0;i<n;i++)
       {
          if(sp.find(nums[i])!=sp.end()) // executes when find the number in the set
          {
            return nums[i];
          }
        sp.insert(nums[i]); // if not insert it to set
         
       }
        
    return -1;
    }
};