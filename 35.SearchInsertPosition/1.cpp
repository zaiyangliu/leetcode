class Solution{
public:
  int searchInsert(vector<int>& nums, int target) {
    for(vector<int>::size_type ix = 0; ix != nums.size(); ++ix){
      if(nums[ix] == target)
	return ix;
    }
    if(nums[0] > target)
      return 0;
    else if(nums[nums.size() - 1] < target)
      return nums.size();
    for(vector<int>::size_type ix = 0; ix != nums.size(); ++ix){
      if(nums[ix] < target && nums[ix + 1] > target)
	return ix + 1;
    }
  }
};
