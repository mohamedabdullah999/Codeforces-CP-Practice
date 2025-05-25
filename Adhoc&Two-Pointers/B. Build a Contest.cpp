/*Link problem : https://codeforces.com/problemset/problem/1100/B */

#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n , m; cin >> n >> m;
   vector <int> v(m);
   for(int i = 0 ; i < m; i++) cin >> v[i];
   int l = 1 , r = 0 , dis = 0;
   bool flag = 0;
   vector <int> fre(n + 1 , 0);
   while(r < m){
      fre[v[r]]++;
      if(fre[v[r]] == 1) dis++;
      if(dis == n){
          cout << 1;
          while(l <= n){
          fre[l]--;
          if(fre[l] == 0) dis--;
          l++;
          }
        l = 1;
      }
      else cout << 0;
      r++;

   }

   cout << endl;
}

int main() {
    solve();
    return 0;
}