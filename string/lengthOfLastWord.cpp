class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length()-1;
        int ans = 0;
        while(s[len] == ' ')
            len--;
        while(len >= 0)
        {
            if(s[len] == ' ')
                break;
            ans++;
            len--;
        }
        
        return ans;
    }
};
