class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> r_nums;
        int n = nums.size() - 1;
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
                swap(nums[index], nums[begin]);
                recurse(nums, begin+1, end, r_nums);
                swap(nums[index], nums[begin]);


            }
        }
    }
};

int main()
{
    string input = "";
    cout << "Enter a string:\n";
    cin >> input;
    cout << endl;

    
    int n = input.size() - 1;
    recurse(input,0,n);
    cout << counter << endl;
}