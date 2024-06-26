class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()<=1){return 0;}
        int mx=0,curr=0;
        int n=0;
        for(int i=0;i<=nums.size();i++){
            mx=max(mx,nums[i]+i);
            if(i>=curr){
                n++;
                curr=mx;
            }
            if(curr>=nums.size()-1){break;}
        }
        return n;
    }
};