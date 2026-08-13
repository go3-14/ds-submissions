class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(string s:strs)
        {
            int n=s.size();
            res=res+to_string(n)+"#"+s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string>res;
        int n=s.size();
        int i=0;
        while(i<n)
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            string word=s.substr(j+1,len);
            res.push_back(word);
            i=j+1+len;
        }
        return res;
    }
};
