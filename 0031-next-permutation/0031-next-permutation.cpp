class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size()-2;
        while(i>=0){
            if(nums[i]<nums[i+1]) break;
            i--;
        }
        if(i == -1) {
            sort(nums.begin(), nums.end());
            return;
        }

        sort(nums.begin() + i + 1, nums.end());
        for(int j = i+1; j<nums.size(); j++){
            if(nums[j]>nums[i]){
                swap(nums[j], nums[i]);
                break;
            }
        }
        sort(nums.begin() + i + 1, nums.end());
        return;
    }
};