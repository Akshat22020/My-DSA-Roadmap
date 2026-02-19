#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans(2, -1);

        // Find first occurrence
        int lo = 0, hi = n - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                ans[0] = mid;
                hi = mid - 1;   // move left
            } 
            else if (nums[mid] < target) {
                lo = mid + 1;
            } 
            else {
                hi = mid - 1;
            }
        }

        // Find last occurrence
        lo = 0, hi = n - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                ans[1] = mid;
                lo = mid + 1;   // move right
            } 
            else if (nums[mid] < target) {
                lo = mid + 1;
            } 
            else {
                hi = mid - 1;
            }
        }

        return ans;
    }

};
int main(){
    Solution sol;
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> result = sol.searchRange(nums, target);
    cout << "First and Last Occurrence of " << target << " is: [" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
