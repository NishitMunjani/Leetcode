class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size(), minEle = INT_MAX;
        int low = 0, high = n-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(nums[low] <= nums[mid]){
                minEle = min(minEle, nums[low]);
                low = mid + 1;
            }
            else{
                minEle = min(minEle, nums[mid]);
                high = mid - 1;
            }
        }
        return minEle;
    }
};