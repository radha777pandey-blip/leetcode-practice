// brute force approach 
/*class Solution {  
public:
    bool containsDuplicate(vector<int>& nums) {
            int n= nums.size();
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(nums[i]==nums[j])
                    return true;
                }
            }
            return false;
    }

    };*/

// optimal hash table approach 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int>s;
       for(int p:nums)
       {
        // s.find(p) checks if p elemts present in the set 
         if(s.find(p) != s.end()) 
         return true;
        s.insert(p); // it is required because everytime we compare set elemt if they exists 
       }
        return false;
    }
}; 

