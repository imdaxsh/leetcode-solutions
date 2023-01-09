class Solution {
public:
    // Function to find the maximum number of points that lie on the same straight line
    int maxPoints(vector<vector<int>>& points) {
        // Get the number of points
        int n = points.size();

        // Edge case: 0 or 1 points
        if (n <= 1) return n;

        // Initialize the maximum number of points to 2 (the minimum possible)
        int ans = 2;

        // Iterate through all pairs of points
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // Initialize the total number of points on the same straight line as points[i] and points[j] to 2 (points[i] and points[j])
                int total = 2;

                // Iterate through all other points
                for (int k = 0; k < n; k++) {
                    // Skip points i and j
                    if (k == i || k == j) continue;

                    // Check if point k lies on the same straight line as points i and j
                    if ((points[j][1] - points[i][1]) * (points[i][0] - points[k][0]) == (points[i][1] - points[k][1]) * (points[j][0] - points[i][0])) {
                        // Point k lies on the same straight line as points i and j, increment the total
                        total++;
                    }
                }
                // Update the maximum number of points
                ans = max(ans, total);
            }
        }
        return ans;
    }
};