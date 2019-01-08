class Solution{
public:
  int mySqrt(int x){
    if(x <= 1)
      return x;
    int lo = 1;
    int hi = x/2;
    int mid;
    while(lo <= hi){
      mid = lo + (hi - lo)/2;
      if(x /(mid + 1)< (mid + 1) && x /mid >= mid)
        return mid;
      else if(x/mid < mid)
        hi = mid - 1;
      else
        lo = mid + 1;
    }
    return hi;
  }
};
