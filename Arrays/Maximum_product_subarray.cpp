#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int pre = 1, suff = 1;
    int ans = INT_MIN;
    int n = nums.size();

    for(int i=0; i<n; i++){
        if(pre == 0) pre = 1;
        if(suff == 0) suff = 1;
         
        pre = pre * nums[i];
        suff = suff * nums[n-i-1];
        ans = max(ans, max(pre,suff));
    }
    return ans;
}

int main(){ 
    vector<int> nums = {-2,3,-4};
    int ans = maxSubArray(nums); 
    cout<<ans;
    return 0;
}