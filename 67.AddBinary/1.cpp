class Solution{
public:
  string addBinary(string a, string b){
    string newS;
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    while(i >= 0 || j >= 0){
      int sum = carry;
      if(i >= 0)
	sum += a[i--] - '0';
      if(j >= 0)
	sum += b[j--] - '0';
      newS.push_back(sum%2 + '0');
      carry = sum / 2;
    }
    if(carry != 0)
      newS.push_back(carry + '0');
    reverse(newS.begin(), newS.end());
    return newS;
  }
};
