#include<iostream>
#include<vector>

using namespace std;

int isSorted(int n, vector<int> a) {
    for(int i=1; i<=n; i++){
        if(a[i]>a[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(){ 
    vector<int> nums = {0,0,0,4};
    int n = nums.size();
    int ans = isSorted(n, nums);
    cout<<ans;
    return 0;
}