class Solution {
public:
    bool isValid(string &s , int indx , int len){
        if (indx + len > s.size()) return false;
        
        string _found = s.substr(indx , len);
        
        if (_found.size() > 1 && _found[0] == '0') return false;
        
        int num = stoi(_found);
        
        if (num > 255) return false;
        
        return true;
    }
    void recur(string &s , int indx , int used , vector<string> &res , string curr){
        if (indx == s.size() && used == 4){
            curr.pop_back();
            res.push_back(curr);
            return;
        }
        if (indx >= s.size() || used >= 4){
            return;
        }
        if (isValid(s , indx , 1)){
            recur(s , indx + 1 , used + 1 , res , curr + s.substr(indx,1) + ".");
        }
        if (isValid(s , indx , 2)){
            recur(s , indx + 2 , used + 1 , res , curr + s.substr(indx,2) + ".");
        }
        if (isValid(s , indx , 3)){
            recur(s , indx + 3 , used + 1 , res , curr + s.substr(indx,3) + ".");
        }
    }
    
    vector<string> restoreIpAddresses(string s) {
        if (s.size() > 12) return {};
        vector<string> res;
        string curr = "";
        recur(s , 0 , 0 , res , curr);
        
        return res;
    }
};