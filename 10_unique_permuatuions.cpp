#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

void genPermutation(int i, string &s, vector<bool> &used, string &curr, unordered_set<string>& st) {
    if (i == s.size()) {
        st.insert(curr);
        return;
    }

    for (int j = 0; j < s.size(); j++) {
        if (!used[j]) {
            used[j] = true; // marked true
            curr.push_back(s[j]);
            
            genPermutation(i + 1, s, used, curr,st); // next char
            
            used[j] = false; // unmark char using backtrack
            curr.pop_back();
        }
    }
}

vector<string> findPermutation(string &s) {
    vector<bool> used(s.size(), false); // check char if used
    unordered_set<string> st;
    string curr = "";

    genPermutation(0, s, used, curr, st);
    
    vector<string> res(st.begin(), st.end()); // set->vector
    return res;
}

int main() {
    string s = "ABC";
    vector<string> res = findPermutation(s);

    for (string perm: res) cout << perm << " ";
    return 0;
}
