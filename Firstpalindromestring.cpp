class Solution {
    bool ispalindrome(string str){
        int i=0;
        int j=str.length()-1;
        while(i<=j){
            if(str[i]!=str[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(ispalindrome(words[i]))
             return words[i];
        }
        return "";
    }
};
