    /*Link problem : https://codeforces.com/problemset/problem/1722/E*/    

    #include <bits/stdc++.h>
    using namespace std;
     
    void solve() {
        vector<vector<long long>>prefix(1001 , vector<long long>(1001));
        long long n , q , i = 1; cin >> n >> q;
        while(i <= n){
           long long x , y; cin >> x >> y;
           prefix[x][y]+=x*y;
           i++;
        }
     
        for(int i= 1; i <= 1000; i++){
          for(int j = 1; j <= 1000; j++){
             prefix[i][j] += prefix[i][j-1];
          }
        }
        for(int i = 1; i <= 1000; i++){
            for(int j = 1; j <= 1000; j++){
                prefix[i][j] += prefix[i-1][j];
            }
        }
        while(q--){
          int hs,ws,hb,wb; cin >> hs>>ws>>hb>>wb;
          cout << prefix[hb-1][wb-1] - prefix[hs][wb-1] - prefix[hb-1][ws] + prefix[hs][ws] << endl;
        }
     
    }
     
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t; cin >> t;
        while (t--) solve();
        //solve();
        return 0;
    }