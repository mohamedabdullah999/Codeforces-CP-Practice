    /*Link-problem: https://codeforces.com/contest/978/problem/E */

    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;
     
    void solve() {
      int n , w;cin >> n >> w;
      vector <int> v(n);
      ll x_max = 0 , x_min = 0 , cntr = 0;
     
      for(int i = 0; i < n; i++){
         cin >> v[i];
         cntr+=v[i];
         x_max = max(x_max , cntr);
         x_min = min(x_min , cntr);
       }
     
       ll min_pref = -x_min , max_pref = w - x_max;
       if(min_pref > max_pref) cout << 0 << endl;
       else cout << max_pref - min_pref + 1 << endl;
    }
     
    int main() {
        solve();
        return 0;
    }