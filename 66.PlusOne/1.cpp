class Solution{
public:
  vector<int> plusOne(vector<int>& digits){
    int len = digits.size();
    for(int i = digits.size() - 1; i >= 0; i--){
      if(digits[i] < 9){
	digits[i]++;
	return digits;
      }
      digits[i] = 0;
    }
    vector<int> newdigits(len + 1);
    newdigits[0] = 1;
    return newdigits;
  }
};
