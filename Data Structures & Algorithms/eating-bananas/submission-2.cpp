class Solution {
public:
    int timetaken(int k,vector<int>&piles)
    {
        int time=0;
        for(int i=0;i<piles.size();i++)
        {
            time+=(piles[i] + k - 1) / k;
        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n = piles.size()-1;

        int low=1;
        int high=piles[n];
        int mid;
        int ans;

        while(low<=high)
        {
            //mid is k
            mid=low+((high-low)/2);
            int time = timetaken(mid,piles);
            if(time<=h)
            {
                high=mid-1;
                ans= mid;
            }
            else if(time>h)
            {
                low=mid+1;
            }
            
        }

        return ans;

        

        
        
    }
};
