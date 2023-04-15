class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int n = s.length();
    int maxLen = 0;
    int left = 0;
    int right = 0;
    std::unordered_set<char> charSet; // to store unique characters

    while (right < n) {
        if (charSet.count(s[right]) == 0) {
            // If the current character is not in the set,
            // add it to the set and move the right pointer
            charSet.insert(s[right]);
            ++right;
            maxLen = std::max(maxLen, right - left);
        } else {
            // If the current character is in the set,
            // remove the character at the left pointer
            charSet.erase(s[left]);
            ++left;
        }
    }

    return maxLen;
    }
};