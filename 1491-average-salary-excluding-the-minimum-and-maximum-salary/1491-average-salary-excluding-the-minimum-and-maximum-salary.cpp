class Solution {
public:
    double average(vector<int>& s) {
        // sort(salary.begin(),salary.end());
        // int n = salary.size();
        // //int cnt =0;
        // if(n%2 == 0){
        //     int t = n/2;
        //      return (salary[t] + salary[t-1])/2;
        // }
        // return (salary[n/2]);
        return (accumulate(begin(s), end(s), 0.) - *min_element(begin(s), end(s)) 
        - *max_element(begin(s), end(s))) / (s.size() - 2);
    }
};