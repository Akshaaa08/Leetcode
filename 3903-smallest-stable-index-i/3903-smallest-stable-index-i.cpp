class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        // int score=-1;
        // int i=0;
        // int maxi=INT_MIN;
        // int mini= INT_MAX;
        // while(i<n){
        //     maxi=*max_element(nums.begin(),nums.begin()+i+1);
        //     mini=*min_element(nums.begin()+i,nums.end());
        //     score=maxi-mini;
        //     if(score<=k){
        //         return i;
        //     }
        //     i++;
        // }
        vector<int> prefmax(n);
        vector<int> suffmin(n);
        prefmax[0]=nums[0];
        for(int i=1;i<n;i++){
            prefmax[i]=max(prefmax[i-1],nums[i]);
        }
        suffmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffmin[i]=min(suffmin[i+1],nums[i]);
        }
        for(int i=0;i<n;i++){
            int score= prefmax[i]-suffmin[i];

            if(score<=k){
                return i;
            }
        }
        return -1;
    }
};