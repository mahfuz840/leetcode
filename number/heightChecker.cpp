class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        int wrong = 0;
        
        vector<int> temp = heights;
        sort(temp.begin(), temp.end());
        
        for(int i = 0; i < heights.size(); i++)
            if(temp[i] != heights[i])
                wrong++;
        
        return wrong;
        
        
    }
};
