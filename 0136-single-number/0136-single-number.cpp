class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
  for(int i:nums) // here i represents values of nums not the indexes
  {
    result=result^i;
  }
  return result;
    }
};