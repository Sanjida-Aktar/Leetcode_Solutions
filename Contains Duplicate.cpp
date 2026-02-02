//problem name: Contains Duplicate 
//link:
//code:

//brouteforce approch:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count = 0;
        for(int i= 0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i] == nums[j]){
                    return true;

                }
            }
        }
     return false;
    }
};
/// that can not be accepted on leetcode 

//optimal Approch

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> seen;
       for(int i=0; i<nums.size() ; i++){
        if(seen.count(nums[i])){
            return true;
        }
        seen.insert(nums[i]);
       }
       return false;
    }
};
