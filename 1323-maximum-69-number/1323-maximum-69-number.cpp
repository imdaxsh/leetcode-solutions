class Solution {
public:
    int maximum69Number (int n) {
        string s = to_string(n);

for(int i=0;i<s.size();i++){
    if(s[i]=='6'){
        s[i]='9';
    break;
    }
  }
//cout<< stoi(s)<<endl;
        return stoi(s);
    }
};