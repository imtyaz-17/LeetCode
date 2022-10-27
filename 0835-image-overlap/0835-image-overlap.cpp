class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<vector<int>>vec1, vec2;
        int rows = img1.size();
        int colm = img1[0].size();
          // Store the indeces of the matrix.
        for(int i =0;i<rows;i++){
            for(int j =0;j<colm ;j++){
                if(img1[i][j])
                    vec1.push_back({i,j});
                if(img2[i][j])
                    vec2.push_back({i,j});
            }
        }
       
        // to store the frequency. of translation vector
        unordered_map<string, int> mp;
        
        for(auto &pa: vec1){
            for(auto &pb: vec2){
                string s = to_string(pa[0] - pb[0]) + " " + to_string(pa[1] - pb[1]);
                
                mp[s]++;
            }
        }
        
        // find the max val of frequency.
        int ans =0;
        for(auto it: mp){
            ans = max(ans, it.second);
        }
        return ans;
    }
};



/**
 * Explanation:
 *https://www.youtube.com/watch?v=XjAllVuN6pI
 */