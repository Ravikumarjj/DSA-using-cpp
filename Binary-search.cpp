class Solution {
public:
    int Search(vector<int>& nums, int target) {

        int l = 0, r = nums.size() - 1;
        while(l < r){
            int mid = l + (r - l + 1) / 2;
            if(nums[mid] <= target)
                l = mid;
            else
                r = mid - 1;
        }

        if(nums[l] == target)
            return l;
        return -1;
    }
};