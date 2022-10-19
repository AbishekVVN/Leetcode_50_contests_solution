class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n;
        if(s.length()%k==0)
        {
            n=(s.length())/k;
        }
        else if(s.length()%k!=0)
        {
            n=(s.length()/k)+1;
        }
        string temp;
        for(int i=0;i<n*k;i++)
        {
            if(i>=s.length())
            {
                temp.push_back(fill);
            }
            else 
            {
                temp.push_back(s[i]);
            }
        }
        vector<string>ans;
        int idx=0;
        while(idx<temp.length())
        {
            string a="";
            int counter=0;
            while(idx<temp.length() and counter<k)
            {
                a.push_back(temp[idx]);
                counter++;
                idx++;
            }
            ans.push_back(a);
        }
        return ans;
        
    }
};
