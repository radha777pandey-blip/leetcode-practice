class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      unordered_set<int>us;
      int k=0;
      for(int i=0;i<nums.size();i++)
      {
        if(us.find(nums[i])!=us.end())
        {
         continue;
        }
        us.insert(nums[i]);
        nums[k]=nums[i];
        k++;
        k=us.size();
      }
      return k;
    }
};