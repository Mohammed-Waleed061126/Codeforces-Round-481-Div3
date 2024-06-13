#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define sortx(X) sort(X.begin(),X.end());
#define el "\n"
#define yes cout<<"YES"<<el;
#define no cout<<"NO"<<el;
#define MW_HY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


void solution(){
  ll size;
  cin >> size;
  string word;
  cin >> word;
  ll x = 0;
  ll res = 0;
  for (ll i = 0; i < size; i++)
  {
    if (word[i] == 'x')
    {
      x++;
    }
    else
    {
      x = 0;
    }
    if (x >= 3)
    {
      res += 1;
    }
  }
  cout << res;
}

int main(){ MW_HY
  int ntimes  = 1;
  //cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}