#include <string>
#include <unordered_map>

class Solution{
public :
    bool isIsomorphic(std::string s, std::string t) {
        std::unordered_map<char, char> st;
        std::unordered_map<char, char> ts;
        
        for (int i = 0; i < s.size(); i++) {
            char a = s[i];
            char b = t[i];
            
            if (st.count(a) && st[a] != b) return false;
            if (ts.count(b) && ts[b] != a) return false;

            st[a] = b;
            ts[b] = a;
        }
        return true;
    }
};
