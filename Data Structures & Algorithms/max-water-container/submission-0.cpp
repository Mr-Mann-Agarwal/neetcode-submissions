#include <climits>
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0;int r=n-1;
        int area;
        int max=INT_MIN;

        while(r>l)
        {
            area=min(heights[l],heights[r])*(r-l);
            if(area>max)max=area;

            if(heights[l]>heights[r])r--;
            else {l++;}

        }

        return max;







    }
};
