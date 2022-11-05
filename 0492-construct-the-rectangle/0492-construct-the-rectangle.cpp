class Solution {
public:
    vector<int> constructRectangle(int area) {
           int a = sqrt(area);
        while (area % a) {
            a--;
        }
        return {area / a, a};
    }
};