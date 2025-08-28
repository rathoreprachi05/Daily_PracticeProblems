#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s1, string s2) {
        if (s1.length() != s2.length()) return false;

        vector<int> freq(26, 0);

        for (char c : s1) freq[c - 'a']++;
        for (char c : s2) freq[c - 'a']--;

        for (int count : freq) {
            if (count != 0) return false;
        }
        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        vector<bool> visited(strs.size(), false);

        for (int i = 0; i < strs.size(); i++) {
            if (visited[i]) continue;

            vector<string> group;
            group.push_back(strs[i]);
            visited[i] = true;

            for (int j = i + 1; j < strs.size(); j++) {
                if (!visited[j] && isAnagram(strs[i], strs[j])) {
                    group.push_back(strs[j]);
                    visited[j] = true;
                }
            }

            result.push_back(group);
        }

        return result;
    }
};

int main() {
    vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution sol;

    vector<vector<string>> result = sol.groupAnagrams(input);

    cout << "Grouped Anagrams:\n";
    for (const auto& group : result) {
        cout << "[ ";
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << "]\n";
    }
    return 0;
}
