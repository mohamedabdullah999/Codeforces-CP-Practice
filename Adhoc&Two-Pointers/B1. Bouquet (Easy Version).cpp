    /*Link problem : https://codeforces.com/problemset/problem/1995/B1*/    

    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;
     
    void oh_my_fucken_A333() {
       int t; cin >> t;
       while(t--){
         ll n , m; cin >> n >> m;
         vector<ll>v(n);
         for(ll i = 0; i < n; i++) cin >> v[i];
         sort(v.begin() , v.end());
         ll l = 0 , r = 0;
         long long temp_sum = 0, max_sum = 0;
         while(r < n){
           temp_sum+=v[r];
           while(((l < r) && (v[r] - v[l] > 1) ) || temp_sum > m) {
            temp_sum -= v[l];
            l++;
           }
           if(temp_sum <= m)max_sum = max(max_sum , temp_sum);
           r++;
         }
         cout << max_sum << endl;
        }
    }
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        oh_my_fucken_A333();
        return 0;
    }