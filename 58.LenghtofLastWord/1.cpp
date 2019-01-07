class Solution{
public:
  int lengthOfLastWord(string s){
    int len = 0;
    int tail = s.size() - 1;
    while(tail >= 0 && s[tail] == ' ')
      tail--;
    while(tail >= 0 && s[tail--] != ' ')
      len++;
    return len;
  }
};
