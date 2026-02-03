//problem name: Count Monobit
// link: https://leetcode.com/problems/count-monobit-integers/

//code:

class Solution {
public:
    int countMonobit(int n) {
        int count = 1;
        int val =1;
        while(val<= n){
            count++;
            val = (val << 1) | 1;  //value 1 ghor bame sore jabe and tar sathe 1 jog hobe 1-> 10+1=11 ->decimal(3)
        }
        return count;
    }
};
