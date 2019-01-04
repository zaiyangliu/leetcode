class Solution{
public:
  bool isValid(string s){
    int sLength = s.length();
    stack<char> stackS;
    for(int i = 0; i < sLength; ++i){
      if( (s[i] == '(') || (s[i] == '[') || (s[i] == '{') ){
	stackS.push(s[i]);
      }
      else{
	if(stackS.empty())
	  return false;
	char temp = stackS.top();
	if( (temp == '(' && s[i] == ')' ) || (temp == '[' && s[i] == ']') || (temp == '{' && s[i] == '}') ){
	  stackS.pop();
	}
	else
	  return false;
      }
    }
    if (stackS.empty())
      return true;
    else
      return false;
  }
};
		
						       
