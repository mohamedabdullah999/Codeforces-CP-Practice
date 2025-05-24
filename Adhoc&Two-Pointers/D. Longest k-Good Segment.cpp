    /*Link problem : https://codeforces.com/problemset/problem/616/D*/

    #include <iostream>
    #include <vector>
    #include <algorithm>
     
    using namespace std;
     
    void solve() {
    	int n, k; cin >> n >> k;
    	vector <int> v(n);
    	for (int i = 0; i < n; i++) cin >> v[i];
    	vector <int> fre(*max_element(v.begin() , v.end()) + 1 , 0);
    	int cntr = 0, l = 0, r = 0, dis = 0, last_l = 0 , last_r = 0;
    	while (r < n) {
    		fre[v[r]]++; // 0 1 2 3
    		if (fre[v[r]] == 1){
    			dis++;
    		}
    		while (dis > k) {
    			fre[v[l]]--;
    			if (fre[v[l]] == 0) {
    				dis--;
    			}
    			l++;
    		}
    		if ((r - l) > (last_r - last_l)) {
    			last_r = r;
    			last_l = l;
    		}
    		r++;
    	}
    	cout << last_l + 1 << " " << last_r + 1 << endl;
     
    }
     
    int main() {
    	solve();
    	return 0;
    }