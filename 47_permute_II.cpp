class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> r_nums;
        int n = nums.size() - 1;
        sort(nums.begin(), nums.end());
        recurse(nums, 0, n, r_nums);
        return r_nums;
    }
    
    void recurse(vector<int> nums, int begin, int end, vector<vector<int>>& r_nums)
    {
        if(begin==end) {
            r_nums.push_back(nums);
        }
        else {
            for(int index = begin; index<=end; index++) {
                if(index!=begin && nums[index]==nums[begin]) {
                    continue;
                }
                swap(nums[index], nums[begin]);
                recurse(nums, begin+1, end, r_nums);

                contin:;
            }
        }
    }
};
