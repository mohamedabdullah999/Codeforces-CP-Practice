    /*Link problem : https://codeforces.com/problemset/problem/295/A*/
    
    #include <bits/stdc++.h>
    using namespace std;
     
    void solve() {
       long long n , m , k; cin >> n >> m >> k;
       vector <long long> op_num(m+2) ,elements(n+2) , dif(n+2);
       vector <pair<int,pair<long long,long long>>> op(m+2);
       for(int i = 1; i<=n;i++)cin>>elements[i];
       for(int i = 1; i<=m;i++) cin >> op[i].first >> op[i].second.first >> op[i].second.second;
       for(int i = 1; i <= n; i++) dif[i] = elements[i] - elements[i - 1];
     
     
       while(k--){
         int xi , yi;cin >> xi>>yi;
         op_num[xi]+= 1;
         op_num[yi + 1] -= 1;
     
       }
     
       for(int i = 1; i <= m; i++){
         op_num[i] += op_num[i-1];
       }
     
       int i = 1;
       while(i <= m){
         long long current_op_multibly =  op[i].second.second;
         long long d = op_num[i] * current_op_multibly;
         dif[op[i].first] += d;
         dif[op[i].second.first + 1] -= d;
         i++;
       }
     
       for(int i = 1; i <= n; i++){
         dif[i] += dif[i-1];
       }
     
       for(int it = 1 ; it <= n; it++) cout << dif[it] << " " ;
       cout << endl;
    }
     
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        //int t; cin >> t;
        //while (t--) solve();
        solve();
        return 0;
    }