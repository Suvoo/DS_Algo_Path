/* https://www.geeksforgeeks.org/maximum-subarray-sum-modulo-m/ */

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

int maxSubarray(int arr[], int n, int m) 
{ 
    int x, prefix = 0, maxim = 0; 
  
    set<int> S; 
    S.insert(0);     
  
    // Traversing the array. 
    for (int i = 0; i < n; i++) 
    { 
        // Finding prefix sum. 
        prefix = (prefix + arr[i])%m; 

        //cout << prefix << " ";
  
        // Finding maximum of prefix sum. 
        maxim = max(maxim, prefix); 

        //cout << maxim << " ";
  
        // Finding iterator pointing to the first  
        // element that is not less than value  
        // "prefix + 1", i.e., greater than or  
        // equal to this value. 
        auto it = S.lower_bound(prefix+1); 
  
        if (it != S.end()) 
            maxim = max(maxim, prefix - (*it) + m );  // VERY VERY IMP...
  
        // Inserting prefix in the set. 
        S.insert(prefix); 
    } 
  
    return maxim; 
} 


int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while(t--){
    int n;int m; cin >> n >> m;
    int a[n];

    for(int i=0;i<n;i++){
      cin >> a[i];
      }

      cout << maxSubarray(a, n, m) << endl;

  }
}
