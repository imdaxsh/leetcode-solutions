// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
         int lo = 1, hi = n, mid;
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;
            if (isBadVersion(mid)) hi = mid;
            else lo = mid+1;
        }
        return lo;
//         int mid ;
//         vector<int> v;
//         for(int i =1;i<n ;i++){
//             v.push_back(i);
//         }
//         if(n%2 ==0){
//             mid = n/2;
//         }
//         else mid =n/2 +1;
        
//         if(mid %2==0){
//         return mid;
//         }
//         else return mid+1;
            
    }
};