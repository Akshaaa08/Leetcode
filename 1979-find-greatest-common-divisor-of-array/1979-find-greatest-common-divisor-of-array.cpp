class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n1 = *min_element(nums.begin(),nums.end());
        int n2 = *max_element(nums.begin(),nums.end());

        while(n1>0 && n2>0){
            if(n2>n1){
                n2=n2%n1;
            }
            else{
                n1=n1%n2;
            }
        }
        if(n1==0){
            return n2;
        }
        return n1;
    }
};