class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    std::map<std::map<char, int>, std::vector<std::string>> mpp;
    for(int i=0;i<strs.size();i++)
    {
        std::map<char, int> m;
        for (char c : strs[i])
        {
            m[c]++;

        }
        mpp[m].push_back(strs[i]);

    }      
    std::vector<std::vector<string>> answer;
    for(auto it:mpp)
    {
        answer.push_back(it.second);
    }

      return answer;  
    }
};
