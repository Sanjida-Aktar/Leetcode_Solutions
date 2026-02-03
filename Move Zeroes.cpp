//Problem name: Move Zeroes
//link: https://leetcode.com/problems/move-zeroes/

//code:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a = 0;

      // moves non-zero element on forward
      
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                nums[a] = nums[i];
                a++;

            }

        }
      
      //fill the blank element in an array in last
      
        for(int i=a; i<nums.size(); i++){
            nums[i]=0;
        }
        
    }
};
