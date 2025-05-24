    /*Link problem: https://codeforces.com/problemset/problem/2000/D*/  
  
    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;
     
    void solve() {
       int t; cin >> t;
       while(t--){
         int n; cin >> n;
         vector<long long>prefix(n + 1);
         for(int i = 1; i <= n; i++){
            cin >> prefix[i];
            prefix[i] += prefix[i - 1];
         }
         string s; cin >> s;
         int l = 0 , r = n - 1;
         long long sum = 0;
         while(l < r){
            if(s[l] == 'L' && s[r] == 'R') {
            sum += prefix[r + 1] - prefix[l];
            r-- , l++;
            }
            if(s[l] == 'R') l++;
            if(s[r] == 'L') r--;
         }
         cout << sum << endl;
        }
    }
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }