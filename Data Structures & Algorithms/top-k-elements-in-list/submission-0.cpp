class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(int x : nums) mpp[x]++;

        vector<pair<int, int>> vec(mpp.begin(), mpp.end());
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
        return b.second < a.second;
        });

        vector<int> ans;
        for (int i = 0; i < k; i++)
            ans.push_back(vec[i].first);

        return ans;
    }
};
