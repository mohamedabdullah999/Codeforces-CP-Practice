    /*Link problem: https://codeforces.com/problemset/problem/701/C*/

    #include <iostream>
    #include <set>
    #include <string>
    #include <algorithm>
    #include <unordered_map>
     
    using namespace std;
     
    void solve() {
    	int n; cin >> n;
    	string s; cin >> s;
    	set<char>st;
    	for (auto it : s) {
    		st.insert(it);
    	}
    	int l = 0, r = 0, distinct = 0 , minn = INT_MAX;
    	unordered_map<char, int> fre;
    	while (r < n) {
    		fre[s[r]]++;
    		if (fre[s[r]] == 1) {
    			distinct++;
    		}
    		
    		while (distinct == st.size()) {
    			minn = min(minn, r - l + 1);
    			fre[s[l]]--;
    			if (fre[s[l]] == 0) {
    				distinct--;
    			}
    			l++;
    		}
    		r++;
    	}
     
    	cout << minn << endl;
     
    }
     
    int main() {
    	solve();
    	return 0;
    }