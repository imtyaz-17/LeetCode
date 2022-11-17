class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        int left[len];
        
        
        left[0]= height[0];
        
        
        
        for(int i=1 ;i<len-1;i++){
            left[i]=max(left[i-1], height[i-1]);
        }
        
        // right[len-1] = height[len-1];
        int right= INT_MIN;
         int ans=0;
        for(int i=len-2;i>=1; i--){
            right=max(right, height[i+1]);
            
            if(min(left[i],right) > height[i])
                ans+=(min(left[i],right) -height[i]);
        }
        
        return ans;
    }
};