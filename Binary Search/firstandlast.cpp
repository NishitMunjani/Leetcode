class Solution {
public:
    int lowerbound(vector<int>& nums, int target){
        int n = nums.size();
        int ans = n;
        int left = 0, right = n-1, mid; 

        while(left<=right){
            mid = (left+right)/2;
            if(nums[mid] >= target){
                ans = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return ans;
    }
    int upperbound(vector<int>& nums, int target){
        int n = nums.size();
        int ans = n;
        int left = 0, right = n-1, mid; 

        while(left<=right){
            mid = (left+right)/2;
            if(nums[mid] > target){
                ans = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int ub = upperbound(nums, target);
        int lb = lowerbound(nums, target);
        if (lb == nums.size() || nums[lb] != target) return {-1, -1};
        else return {lb, ub-1};
    }
};