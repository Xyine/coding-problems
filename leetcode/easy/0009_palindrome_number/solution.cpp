#include <string>
#include <algorithm>

bool isPalindrome(int x) {
    if (x < 0) return false;

    auto s = std::to_string(x);
    return std::equal(s.begin(), s.begin() + s.size()/2, s.rbegin());
}
