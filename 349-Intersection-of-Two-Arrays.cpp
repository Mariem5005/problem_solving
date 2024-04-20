class Solution {
public:
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int>ans;
    for(int i=0;i<nums1.size();i++){
    int l=0,r=nums2.size()-1,mid=0;
    while(l<=r){
    mid=l+(r-l)/2;
    if(nums2[mid]==nums1[i]){
        if(find(ans.begin(),ans.end(),nums2[mid])!=ans.end())
            break;
    ans.push_back(nums2[mid]);
    break;
    }
    else if(nums2[mid]<nums1[i])
        l=mid+1;
    else
    r=mid-1;
    }
    }
    return ans;
}
};