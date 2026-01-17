// problem: Container with Most Water 
// link: http://leetcode.com/problems/container-with-most-water/description/



//brute force apporch which can not be subbmitted
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
       int maxArea = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int w = j-i;
                int hight = min( height[i], height[j] );
                int area = w * hight;

                maxArea = max(maxArea, area);
            }
        }
        return maxArea;
    }
};


// 2 pointer approch
//optimal solution that accept on leetcode
class Solution {
public:
    int maxArea(vector<int>& height) {
        int rp= height.size()-1;
       int maxWater = 0;
       int lp=0;

        while(lp < rp)
        {
            int w= rp-lp;
            int h= min(height[lp], height[rp]);
            int area= w * h;
            maxWater = max(maxWater, area);

            height[lp]<height[rp]? lp++: rp--;

        }
        return maxWater;
    }
};
