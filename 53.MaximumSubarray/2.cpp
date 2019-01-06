class Solution{
public:
  int maxSubArray(vector<int>& nums){
    return div_con(nums, 0, nums.size() - 1);
  }
  int div_con(vector<int>& nums, int left, int right){
    if(left > right)
      return 0;
    if(left == right)
      return nums[left];
    int mid = (left + right)/2;
    int left_max = div_con(nums, left, mid);
    int right_max = div_con(nums, mid + 1, right);
    int mid_left_max = INT_MIN;
    int left_temp = 0;
    for(int i = mid; i >= 0; i--){
      left_temp += nums[i];
      mid_left_max = max(mid_left_max, left_temp);
    }
    int mid_right_max = INT_MIN;
    int right_temp = 0;
    for(int i = mid + 1; i <= right; ++i){
      right_temp += nums[i];
      mid_right_max = max(mid_right_max, right_temp);
    }
    int middle_max = mid_left_max + mid_right_max;
    if(left_max > right_max)
      return max(left_max, middle_max);
    else
      return max(right_max, middle_max);
  }
};
