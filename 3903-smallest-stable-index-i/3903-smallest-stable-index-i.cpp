class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int score=-1;
        int i=0;
        int maxi=INT_MIN;
        int mini= INT_MAX;
        while(i<n){
            maxi=*max_element(nums.begin(),nums.begin()+i+1);
            mini=*min_element(nums.begin()+i,nums.end());
            score=maxi-mini;
            if(score<=k){
                return i;
            }
            i++;
        }
        return -1;
    }
};