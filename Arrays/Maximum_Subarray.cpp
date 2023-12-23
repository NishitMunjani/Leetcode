#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int curMax = 0, maxi = INT_MIN;
    for(auto c : nums)
        curMax = max(c, curMax + c),
        maxi = max(maxi, curMax);
    return maxi;
}

int main(){ 
    vector<int> nums = {1,2,3,1};
    int ans = maxSubArray(nums); 
    cout<<ans;
    return 0;
}