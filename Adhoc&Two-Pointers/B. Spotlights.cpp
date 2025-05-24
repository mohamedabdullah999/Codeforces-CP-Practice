    /*link problem : https://codeforces.com/problemset/problem/729/B*/    

    #include <iostream>
    #include <vector>
     
    using namespace std;
     
    int n, m;
     
    vector<vector<int>> grid;          
    vector<vector<bool>> has_left;
    vector<vector<bool>> has_right;
    vector<vector<bool>> has_up;
    vector<vector<bool>> has_down;
     
    int final_output() {
        int cntr = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 0) {  
                    if (has_left[i][j]) cntr++;
                    if (has_right[i][j]) cntr++;
                    if (has_up[i][j]) cntr++;
                    if (has_down[i][j]) cntr++;
                }
            }
        }
        return cntr;
    }
     
    int intilaize_grids() {
        cin >> n >> m;
     
        grid.assign(n, vector<int>(m));
        has_left.assign(n, vector<bool>(m, false));
        has_right.assign(n, vector<bool>(m, false));
        has_up.assign(n, vector<bool>(m, false));
        has_down.assign(n, vector<bool>(m, false));
     
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> grid[i][j];
     
        for (int i = 0; i < n; ++i) {
            bool yes = false;
            for (int j = m - 1; j >= 0; --j) {
                has_right[i][j] = yes;
                if (grid[i][j] == 1) yes = true;
            }
     
            yes = false;
            for (int j = 0; j < m; ++j) {
                has_left[i][j] = yes;
                if (grid[i][j] == 1) yes = true;
            }
        }
     
        for (int j = 0; j < m; ++j) {
            bool yes = false;
            for (int i = 0; i < n; ++i) {
                has_up[i][j] = yes;
                if (grid[i][j] == 1) yes = true;
            }
     
            yes = false;
            for (int i = n - 1; i >= 0; --i) {
                has_down[i][j] = yes;
                if (grid[i][j] == 1) yes = true;
            }
        }
     
        return final_output();
    }
     
    int do_it() {
        return intilaize_grids();
    }
     
    int main() {
        cout << do_it() << endl;
        return 0;
    }