class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        int longest=1;
        if(n==0) return 0;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }

        for(auto it: s){
            if(s.find(it-1) == s.end()){
                int cnt = 1;
                int x = it;
                while(s.find(x+1) != s.end()){
                    x++;
                    cnt++;
                }
                longest = max(cnt,longest);
            }
        }
        return longest;
    }
};