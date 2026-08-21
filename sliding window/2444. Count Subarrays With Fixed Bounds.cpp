class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int minkPOS=-1;
        int maxkPOS=-1;
        int culpritIDX=-1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK || nums[i]>maxK){
                culpritIDX=i;
            }
            if(nums[i]==minK){
                minkPOS=i;
            }
            if(nums[i]==maxK){
                maxkPOS=i;
            }

            long long smaller= min(minkPOS,maxkPOS);
            long long temp=smaller-culpritIDX;
            ans+=(temp<=0)?0:temp;

        }
        return ans;

    }
};