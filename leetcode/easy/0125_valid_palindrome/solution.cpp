#include <algorithm>
#include <cctype>
#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string clean;

        for (char c : s) {
            if (std::isalnum(static_cast<unsigned char>(c))) {
                clean += std::tolower(static_cast<unsigned char>(c));
            }
        }
        
        if (clean == "") return true;

        for (int left = 0, right = clean.size(); left < right; left++, right--) {
            if (clean[left] != clean[right]) return false;
        }
        return true;
    }

    bool isPalindrome(std::string s) {
        int left = 0, right = s.size() - 1;

        while(left < right) {
            if (!std::isalnum(s[left])) left++;
            else if (!std::isalnum(s[right])) right--;
            else if (std::tolower(s[left]) != std::tolower(s[right])) return false;
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};