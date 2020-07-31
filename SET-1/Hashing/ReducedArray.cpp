https://www.geeksforgeeks.org/convert-an-array-to-reduced-form-set-1-simple-and-hashing/

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
    int a[n];int b[n];

    map<int,int> m;

    for(int i=0;i<n;i++){
      cin >> a[i];
      b[i] = a[i];
    }
    sort(a,a+n);

    for(int i=0;i<n;i++){
      m.insert({a[i],i});
    }

    for(int i=0;i<n;i++){
      if(m.count(b[i])){
        cout << m[b[i]] << " ";
      } 
    }

    
    cout << endl;

  }
}
