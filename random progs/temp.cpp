class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        int max=nums[0];
        int min=INT_MAX;
        for(int i = 0; i<n; i++){
            if(nums[i] > max){
                max = nums[i];
            }
            if(nums[i] < min){
                min = nums[i];
            }
        }
        int out=-1;
        for(int i = 0 ; i<n; i++){
            if(nums[i] > min && nums[i]<max){
                out = nums[i];
            }
        }
        if(out == -1){
            return -1;
        }
        else{
            return out;
        }
    }
};