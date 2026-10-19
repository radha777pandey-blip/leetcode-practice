// brute force approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
         for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i,j};
            }
        }
    }
    return { };
  
    }
}; 
/* optimal approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
             unordered_map<int,int>arr;
             for(int i=0;i<nums.size();i++)
             {
                int first_number =target-nums[i];  // a+b= target 
                                                    //  a = target - b 
                if(arr.find(first_number)!=arr.end()) // have we seen this number before 
                return {arr[first_number],i}; // if yes then this line execute

                arr.insert({nums[i],i}); // element, index // otherwise element and index pair of current nums vector would be inserted into map


             }
  return {  }; // handles empty indies if we don't get any indies such as  a+b=target

           }
}; */
