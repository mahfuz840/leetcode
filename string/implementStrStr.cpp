class Solution {
public:
    int strStr(string haystack, string needle) {
        int length = needle.length();
        if(length == 0)
            return 0;
        for(int i = 0; i+length <= haystack.length(); i++)
        {
            if(haystack.substr(i, length) == needle)
                return i;
        }
        return -1;
    }
};
