#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long 
#define debug cout<<"Error" << nl;
#define FAST ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
    {
        return a.first > b.first;
    }
    return a.second < b.second;
}

signed main()
{
    FAST
    int t;
    cin >> t;
    while(t--)
    {
      int n,m;
      cin >> n >> m;
      vector<vector<int>>v(n,vector<int>(m));
      int sum=0, mn = LLONG_MAX, neg=0;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
            cin >> v[i][j];
            sum+=(abs(v[i][j]));
            if(v[i][j]<0)neg++;
            mn = min(mn,abs(v[i][j]));
        }
      }
      int ans;
      if(neg&1)
      {
        ans = sum-(2*mn);
      }else{
        ans = sum;
      }
      cout << ans << nl;
    }
    return 0;
}