class Solution{
public:
  int climbStairs(int n){
    int pre_pre = 1, pre = 2;
    int ans = 0;
    if(n == 2 || n ==1)
      return n;
    for(int i = 3; i <= n; ++i){
      ans = pre_pre + pre;
      pre_pre = pre;
      pre = ans;
    }
    return ans;
  }
};
