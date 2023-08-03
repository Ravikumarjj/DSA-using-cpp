class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high, mid, n = nums.size();
        high = n - 1;
        while(low <= high){
            mid = (low + high) / 2;
            if(nums[mid] == target)return mid;
            else if(nums[mid] > target)high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};