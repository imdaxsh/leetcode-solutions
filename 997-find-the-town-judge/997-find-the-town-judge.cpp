class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        for(int p=1 ; p <= n ; p++)
        {
            if(person(p, n, trust)){
                return p; 
            }
            
        }
        
        return -1;
    }
    private:
    bool person(int p ,const int n , const vector<vector<int>>& trust){
        int count = 0 ;
        for(vector<int>pair : trust){
            if(pair[0] == p) return false;
            if(pair[1] == p) count ++ ;
        }if(count < n-1) return false;
        return true ;
    }
    
};