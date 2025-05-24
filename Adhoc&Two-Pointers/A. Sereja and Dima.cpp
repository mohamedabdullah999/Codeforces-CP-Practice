    /*Link problem: https://codeforces.com/problemset/problem/381/A*/

    #include <iostream>
    #include <deque>
    using namespace std;
     
    int main()
    {
        int n , cntr_ser = 0 , cntr_Dima = 0; cin >> n;
        deque <int> dq(n);
        for(int i = 0; i < n; i++)
        {
         cin >> dq.at(i);
        }
        while(dq.size() >= 1)
        {
         if(dq.front() > dq.back())
         {
          cntr_ser += dq.front();
          dq.pop_front();
     
         }
         else
         {
          cntr_ser += dq.back();
          dq.pop_back();
         }
         if(dq.size() == 0) break;
         if(dq.front() > dq.back())
         {
          cntr_Dima += dq.front();
          dq.pop_front();
     
         }
         else
         {
          cntr_Dima += dq.back();
          dq.pop_back();
         }
     
        }
        cout << cntr_ser << " " << cntr_Dima << endl;
        return 0;
    }