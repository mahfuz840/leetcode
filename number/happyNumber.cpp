class Solution {
public:
    bool isHappy(int n) {
        int temp = 0;
        unordered_set<int> track;
        track.insert(n);
        while(n != 1)
        {
            while(n != 0)
            {
                temp += pow(n%10, 2);
                n = n/10;
            }
            
            n = temp;
            temp = 0;
            if(track.find(n) != track.end())
                return false;
            track.insert(n);
        }
        
        return true;
        
    }
};
