class Solution {
    bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    };
public:
    int countVowelSubstrings(string s) {
      int ans=0;
        int N=s.size(); 
        unordered_map<char,int>ctr;
        for(int i=0;i<N;i++){
            ctr.clear();
            for(int j=i;j<N && isvowel(s[j]);++j){
                ctr[s[j]]++;
                if(ctr.size()==5)++ans;
            }
        }
        return ans;
    }
};
