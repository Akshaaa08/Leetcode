class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0;
        int ans=1;
        long long sum = 0;
        for (int r = 0;r<nums.size();r++){
            sum=sum+nums[r];
            long long cost = 1LL * nums[r]*(r-l+1)-sum;
            while(cost>k){
                sum=sum-nums[l];
                l++;
                cost= 1LL * nums[r]*(r-l+1)-sum;
            }
            ans=max(ans,(r-l+1));
        }
        return ans;
    }
};