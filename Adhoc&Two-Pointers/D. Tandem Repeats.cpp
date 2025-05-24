    /*Link problem: https://codeforces.com/problemset/problem/1948/D*/  
  
    #include <bits/stdc++.h>
     
    using namespace std;
     
    bool is_tandem(int start, int len, string s)
    {
        int mid = start + len / 2;
        for (int i = 0; i < len / 2; ++i)
        {
            char a = s[start + i];
            char b = s[mid + i];
            if (a != b && a != '?' && b != '?')
                return 0;
        }
        return 1;
    }
     
    void solve()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int max_len = 0;
            string s;
            cin >> s;
            for (int len = s.size() - (s.size() % 2); len >= 2; len -= 2)
            {
                bool found = false;
                for (int i = 0; i + len <= s.size(); i++)
                {
                    if (is_tandem(i, len, s))
                    {
                        max_len = len;
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }
     
            cout << max_len << endl;
        }
    }
     
    int main()
    {
        solve();
        return 0;
    }