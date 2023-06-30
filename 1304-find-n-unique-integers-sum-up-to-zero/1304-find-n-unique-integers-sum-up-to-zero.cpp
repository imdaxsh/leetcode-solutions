class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
//         if(n%2!=0){
//             v.push_back[0];
//             do{
//                 int i=1;
//                 v.push_back[i];
//                 v.push_back[-i];
//             }while(n>=v.size());
            
//         }else{
//             do{
//                 int i=1;
//                 v.push_back[i];
//                 v.push_back[-i];
//             }while(n>=v.size());
//         }
//         return v;
         vector<int>ans;
        for(int i=1;i<=n/2;i++)
        {
            ans.push_back(-i);
            ans.push_back(i);
        }
        if(n%2==1)
            ans.push_back(0);
        return ans;
    }
};