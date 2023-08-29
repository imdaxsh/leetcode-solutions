class Solution {
public:
   int bestClosingTime(string cust) {
    int p = count(begin(cust), end(cust), 'Y'), min_p = p, j = 0;
    for (int i = 0; i < cust.size(); ++i) {
        p += cust[i] == 'Y' ? -1 : 1;
        if (p < min_p) {
            min_p = p;
            j = i + 1;
        }
    }
    return j;
}
};