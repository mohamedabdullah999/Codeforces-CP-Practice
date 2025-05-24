    /*Link problem : https://codeforces.com/problemset/problem/433/B*/

    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n;cin >> n;
        long long prefix[n + 1] , pref[n + 1];
        prefix[0] = 0; pref[0] = 0;
        for(int i = 1; i <= n; i++) {
            cin >> prefix[i];
            pref[i] = prefix[i];
            prefix[i] += prefix[i - 1];
        }
     
        sort(pref, pref + n + 1);
        for(int i = 1; i <= n; i++) {
            pref[i] += pref[i - 1];
        }
        int m , type , l , r; cin >> m;
        while(m--) {
            cin >> type >> l >> r;
            if(type == 1) {
                cout << prefix[r] - prefix[l - 1] << endl;
            }
            else {
                cout << pref[r] - pref[l - 1] << endl;
            }
        }
        return 0;
    }