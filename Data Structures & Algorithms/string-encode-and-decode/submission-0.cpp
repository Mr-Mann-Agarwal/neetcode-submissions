class Solution {
public:

    string encode(vector<string>& strs) {
        string data;
        for(auto s :strs)
        {
            data+=std::to_string(s.size());
            data+='#';
            for(auto c :s)
            {
                data.push_back(c);
            }
        }
      
        std::cout<<data;
        return data;
    }
    

    vector<string> decode(string s) 
    {
        std::vector<std::string>final;
        char*ptr=&s[0];
        while(*ptr!='\0')
        {

            
            std::vector<int>size;
            
           int n = 0;
            while (*ptr != '#') {
            int digit = *ptr - '0'; 
             n = (n * 10) + digit;   
             ptr++;
            }

            std::string ping="";
            for(int i=0;i<n;i++)
            {
                ptr++;
                ping.push_back(*(ptr));

            }
            final.push_back(ping);

            ptr++;
        }
      return final;

    }
};
