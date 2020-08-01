/* https://www.geeksforgeeks.org/find-if-there-is-a-subarray-with-0-sum/ */

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

bool subArrayExists(int arr[], int n) 
{ 
    set<int> sumSet; 

    int sum = 0; 
    for (int i = 0 ; i < n ; i++) 
    { 
        sum += arr[i]; 

        if (sum == 0 || sumSet.find(sum) != sumSet.end()) 
            return true; 
  
        sumSet.insert(sum); 
    } 
    return false; 
}  


int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
      cin >> a[i];
      }

     if (subArrayExists(a, n)) 
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    }
  }
