class Solution{
public:
  int maxSubArray(vector<int>& nums){
    return maxSub(nums, 0, nums.size() - 1);
  }
private:
  int maxSub(vector<int>& nums, int left, int right){
    if(left > right){
      return INT_MIN;
    }
    int m = left + (right - left)/2;
    int left_max = maxSub(nums, left, m - 1);
    int right_max = maxSub(nums, m + 1, right);
    int max_left = 0, max_right = 0;
    for(int i = m - 1, sum = 0; i >= left; i--){
      sum += nums[i];
      max_left = max(max_left, sum);
    }
    for(int i = m + 1, sum = 0; i <= right; ++i){
      sum += nums[i];
      max_right = max(max_right, sum);
    }
    return max(max(left_max, right_max), max_left + max_right + nums[m]);
  }
};
