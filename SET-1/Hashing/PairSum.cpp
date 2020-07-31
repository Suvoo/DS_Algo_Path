/* QUESTION LINK : https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum/0 */

#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, n) for(int i = a; i < n; i++)
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define mod 1000000007
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  //  #ifndef ONLINE_JUDGE 
  //   freopen("input.txt", "r", stdin); 
  //   freopen("output.txt", "w", stdout); 
  // #endif

  int t; cin >> t;

  while(t--){

  int n; cin >> n;
  int sum; cin >> sum;
  int a[n]; map<int,int> m;

  for(int i=0;i<n;i++){
    cin >> a[i];

  }

  int dif =0;int count =0;

  for(int i=0;i<n;i++){
     dif = sum - a[i];
     if(m.count(dif)){
      count+=m[dif];
      m[a[i]]++;
     }
     else{
      m[a[i]]++;
     }
  }
  cout << count << endl;
}
}
