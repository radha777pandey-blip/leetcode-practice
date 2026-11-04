class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
      unordered_map<int,int>result;
      for(int i=0;i<n;i++)
      {
         result[nums[i]]++;
         if(result[nums[i]]>n/2)
         return nums[i];
      }
return -1;

    }
};