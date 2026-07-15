class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int l = 0, mx = 0;
        for(int r=0; r<s.size(); r++){
            while(st.contains(s[r])){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            mx = max(mx, r-l+1);
        }
        return mx;
    }
};
