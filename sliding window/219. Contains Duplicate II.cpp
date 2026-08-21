class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        unordered_set<int>mp;
        while(j<n){

            if(abs(i-j)>k){
                mp.erase(nums[i]);
                i++;
            }
            if(mp.find(nums[j])!=mp.end()){
                return true;
            }
            mp.insert(nums[j]);
            j++;
        }
        return false;
    }
};