#include<iostream>
#include<vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> nums2;
    for(int i=0; i<nums.size(); i++){
        int ans = 1;
        for(int j=0; j<nums.size(); j++){
            if(i == j) continue;
            else{
                ans = ans * nums[j];
            }
        }
        nums2.push_back(ans);
    }
    return nums2;
}

int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> nums2 = productExceptSelf(nums);
    for(int i=0; i<nums2.size(); i++){
        cout<<nums2[i];
    }
    return 0;
}