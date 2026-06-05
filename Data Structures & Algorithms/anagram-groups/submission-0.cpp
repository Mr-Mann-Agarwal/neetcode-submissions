class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
       /*  std::vector<std::map> v1;
        std::map<int,int>
        for(int i=0;i<strs.size();i++)
        {
            for(int j=0;j<v1.size();j++)
            {
                if(v1[j].find(strs[i])!=v1[j].end())
                {
                    std::unordered_map<char,int>;
                }
            }
        } */


        /* std::map<string,int> mpp;
        for(int i=0;i<strs.size();i++)
        {
            if(mpp.find(strs[i])==mpp.end())
            {
                mpp[strs[i]]
            }
        } */

       /*  std::map<std::vector<std::map,std::vector<int>> mpp;
        for(int i=0;i<strs.size();i++)
        {
            std::vector<std::map> key;
            std::vector<int>value;
            std::map<string,int>mpp1;
            mpp1[strs[i]]++;
            for (auto it :mpp)
            {
                for(int k=0;k<it.first.size();k++)
                {
                    if(it.first[k]!=mpp1)
                    {
                        it.first.insert(mpp1);
                        it.second.insert(i);
                    }
                }
            }

        } */

        std::map<std::vector<int>,std::vector<std::string>>mpp;


        for(int i=0;i<strs.size();i++)
        {
            std::vector<int> count(26,0);
            for(char c: strs[i])
            {
                count[c-'a']++;
            }
            
            mpp[count].push_back(strs[i]);
            

        }
        std::vector<std::vector<string>>answer;
        for(auto it : mpp)
        {
            answer.push_back(it.second);
        }




        return answer;



        
    }
};
