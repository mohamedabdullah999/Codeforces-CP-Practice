    /*Link problem : https://codeforces.com/problemset/problem/1669/F*/    

    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;
     
    void solve() {
       int t; cin >> t;
       while(t--){
         int n; cin >> n;
         vector <int> v(n);
         for(int i = 0; i < n; i++) cin >> v[i];
         int l = 0 , r = n - 1 , current_valid = 0 , Alice_now = 0 , bob_now = 0;
         while( l <= r){
           if(Alice_now <= bob_now)Alice_now += v[l++]; // 2 + 1 + 4
           else bob_now+= v[r--]; // 1 + 4 + 2
           if((Alice_now == bob_now)) current_valid = max( current_valid , l + n - r - 1);
         }
         cout << current_valid << endl;
       }
    }
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }