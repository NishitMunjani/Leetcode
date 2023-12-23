#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, bool> map;
    for (int i : nums) {
        if (map.find(i) != map.end()) {
            return true;
        }
        map[i] = false;
    }
    return false;
}

int main(){ 
    vector<int> nums = {1,2,3,1};
    bool ans = containsDuplicate(nums); 
    cout<<ans;
    return 0;
}