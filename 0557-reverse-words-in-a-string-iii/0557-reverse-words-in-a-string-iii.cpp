class Solution {
public:
    string reverseWords(string s) {
          istringstream iss(s);  // Create an input string stream
    ostringstream oss;     // Create an output string stream
    string word;
    bool first_word = true;

    // Loop through each word in the input string
    while (iss >> word) {
        if (!first_word) {
            oss << " ";  // Add a space before each word, except the first word
        }
        first_word = false;

        // Reverse the characters in the word
        for (int i = word.length() - 1; i >= 0; i--) {
            oss << word[i];
        }
    }

    return oss.str();
    }
};