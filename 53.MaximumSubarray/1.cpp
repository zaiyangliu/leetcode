class Solution{
public:
  int maxSubArray(vector<int>& nums){
    int max = INT_MIN;
    for(vector<int>::size_type ix = 0; ix != nums.size(); ++ix){
      int temp = 0;
      for(vector<int>::size_type iy = ix; iy != nums.size(); ++iy){
	temp += nums[iy];
	if(temp > max)
	  max = temp;
      }
    }
    return max;
  }
};
