class Solution{
public:
  int removeDuplicates(vector<int> &nums){
    if(nums.empty())
      return 0;
    int pre=0;
    int cur = 0;
    int n = nums.size();
    while(cur < n){
      if(nums[pre] == nums[cur])
	++cur;
      else
	nums[++pre] = nums[cur++];
    }
    return pre + 1;
  }
};
