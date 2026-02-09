//problem name: Sqrt(x)
//link: https://leetcode.com/problems/sqrtx/?envType=problem-list-v2&envId=math

//code:
class Solution {
public:
    int mySqrt(int x) {
        int result = sqrt(x);
        return(round(result));
    }
};
