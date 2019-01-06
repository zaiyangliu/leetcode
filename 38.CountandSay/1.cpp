class Solution{
public:
  string countAndSay(int n){
    if(n==1)
      return "1";
    string result = "11";
    for(int i = 2; i < n; ++i)
      result = get(result);
    return result;

  }
  string get(string str){
    string result = "";
    int cnt = 1;
    char ch = str[0];
    for(int i = 1; i < str.size(); ++i){
      if(str[i] == ch)
	cnt ++;
      else{
	result.push_back(cnt + '0');
	result.push_back(ch);
	cnt = 1;
	ch = str[i];
      }
    }
    result.push_back(cnt + '0');
    result.push_back(ch);
    return result;
  }
};
