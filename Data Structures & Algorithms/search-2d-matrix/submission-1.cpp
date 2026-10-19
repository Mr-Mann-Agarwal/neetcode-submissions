class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int dmin= INT_MAX;
        int x,y;

        int low=0;
        int high=matrix.size()-1;
        int mid;

        while(low<=high)
        {
            mid=low+((high-low)/2);
            if(matrix[mid][0]==target)
            {
                cout<<mid<<endl;
                return true;
                
            }

            else if(matrix[mid][0]<target)
            {
                low=mid+1;
            }

            else if(matrix[mid][0]>target)
            {
                high=mid-1;
            }




        }

        //high points to the largest element smaller than target
        // so we will continue from high
        //if high is negative we make it 0

        if(high<0)
        {
            high=0;
        }

        int low2=0;
        int high2=matrix[0].size()-1;
        int mid2;

        while(low2<=high2)
        {
            mid2=low2+((high2-low2)/2);

             if(matrix[high][mid2]==target)
            {
                return true;
            }

            else if(matrix[high][mid2]<target)
            {
                low2=mid2+1;
            }

            else if(matrix[high][mid2]>target)
            {
                high2=mid2-1;
            }

        }





        return false;





        
    }
};
