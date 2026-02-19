#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int idx, string &s, string &ans, vector<string> &v) {
    if (idx == s.size()) {
        v.push_back(ans);
        return;
    }

    char ch = s[idx];

    // count consecutive same chars
    int j = idx;
    while (j < s.size() && s[j] == ch) j++;
    int count = j - idx;

    // option 1: take 0 times
    solve(j, s, ans, v);

    // option 2: take 1 to count times
    for (int k = 1; k <= count; k++) {
        ans.push_back(ch);
        solve(j, s, ans, v);
    }

    // backtrack
    ans.erase(ans.size() - count);
}

int main() {
    string str = "aaab";   // works best when duplicates are grouped
    vector<string> v;
    string ans = "";

    solve(0, str, ans, v);

    for (auto &x : v) {
        cout << "{" << x << "}" << endl;
    }
    return 0;
}
