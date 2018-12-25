class Solution{
public:
  int reverse(int x){
    int flag = 1;
    if(x <= INT_MIN)
      return 0;
    if(x < 0){
      x = -x;
      flag = -1;
    }
    long y = x % 10;
    while(x/10 != 0){
      x /= 10;
      y *= 10;
      y += x % 10;
    }
    if(y > INT_MAX)
      return 0;
    else
      return (int) y * flag;
  }
};



