#include <string>
#include <unordered_map>

int romanToInt(const std::string& s) {
    static const std::unordered_map<char, int> values = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100},
        {'D', 500}, {'M', 1000}
    };

    int total = 0;

    for (size_t i = 0; i < s.size(); ++i) {
        int curr = values.at(s[i]);

        if (i + 1 < s.size() && curr < values.at(s[i + 1])) {
            total -= curr;
        } else {
            total += curr;
        }
    }

    return total;
}
