    /*Link problem : https://codeforces.com/problemset/problem/279/B*/

    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int n, t , x;
        cin >> n >> t;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            cin >> x;
            v.push_back(x);
        }
        int maxx = 0, sum = 0, start = 0;
        for (int end = 0; end < n; end++) {
            sum += v[end];
            while (sum > t) {
                sum -= v[start];
                start++;
            }
            maxx = max(maxx, end - start + 1);
        }
        cout << maxx << endl;
        return 0;
    }