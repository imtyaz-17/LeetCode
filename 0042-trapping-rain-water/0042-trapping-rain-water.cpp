class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        int left[len],right[len];
        
        left[0]= height[0];
        
        
        
        for(int i=1 ;i<len;i++){
            left[i]=max(left[i-1], height[i]);
        }
        
        right[len-1] = height[len-1];
        for(int i=len-2 ;i>=0;i--){
            right[i]=max(right[i+1], height[i]);
        }
        
        int ans=0;
        for(int i=0;i<len;i++){
            ans+=(min(left[i],right[i]) -height[i]);
        }
        
        return ans;
    }
};