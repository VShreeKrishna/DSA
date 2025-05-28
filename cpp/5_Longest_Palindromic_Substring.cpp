class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int start = 0, maxLen = 1;

        for (int i = 0; i < s.length(); ++i) {
            solve(s, i, i, start, maxLen);     // Odd-length
            solve(s, i, i + 1, start, maxLen); // Even-length
        }

        return s.substr(start, maxLen);
    }

private:
    void solve(const string& s, int left, int right, int& start, int& maxLen) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                maxLen = right - left + 1;
                start = left;
            }
            --left;
            ++right;
        }
    }
};
