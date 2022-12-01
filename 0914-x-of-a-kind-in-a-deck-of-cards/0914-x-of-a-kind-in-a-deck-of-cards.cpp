        class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map <int,int> mp;
        vector <int> v;
        if(deck.size()==1)
            return false;
        for (int i:deck)
            mp[i+1]++;
        for(auto it:mp){
            v.push_back(it.second);
        }
       
        if(v.size()==1 && deck.size()!=1)
            return true;
        int a=__gcd(v[0],v[1]);
        if(a==1)
            return false;
        cout<<a<<" ";
        for(int i=2;i<v.size();i++){
            if((__gcd(v[i],v[i-1]))==1)
                return false;
            else 
                      a=(__gcd(v[i],v[i-1]));
            cout<<a<<" ";
        }
        if(a==1)
            return false;
        return true;
    }
};