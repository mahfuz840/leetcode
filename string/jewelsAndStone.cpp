class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int j = 0;
        
        int freq[52] = {0};
        for(int i = 0; i < J.length(); i++)
        {
            if(J[i] >= 'a' && J[i] <= 'z')
                freq[J[i]-'a']++;
            else
                freq[J[i]-'A'+26]++;
        }
        
        for(int i = 0; i < S.length(); i++)
        {
            // cout << i << endl;
            if(S[i] >= 'a' && S[i] <= 'z')
            {
                if(freq[S[i]-'a'])
                    j++;
            }
            else if(freq[S[i]-'A'+26])
                j++;
        }
        
        return j;
    }
};
