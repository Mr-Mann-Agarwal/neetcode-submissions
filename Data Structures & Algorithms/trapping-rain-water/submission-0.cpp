class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;int r=0;
        vector<int>lmax(n);
        vector<int>rmax(n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(height[i]>l)
            {
                l=height[i];
            }
            lmax[i]=l;

        }
        for(int i=n-1;i>=0;i--)
        {
            if(height[i]>r)
            {
                r=height[i];
            }
            rmax[i]=r;

        }
        int k;
        for(int i=0;i<n;i++)
        {
            k=(min(lmax[i],rmax[i]))-height[i];
            if(k<0)k=0;
            ans=ans+k;
        }
        return ans;
        
    }
};
