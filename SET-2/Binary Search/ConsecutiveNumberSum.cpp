
/*
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

//  int *a=new int[n];

void printSum(int N) 
{ 
    // Note that we don't ever have to sum 
    // numbers > ceil(N/2) 
    int start = 1, end = (N+1)/2; 
  
    // Repeat the loop from bottom to half 
    while (start < end) 
    { 
        // Check if there exist any sequence 
        // from bottom to half which adds up to N 
        int sum = 0; 
        for (int i = start; i <= end; i++) 
        { 
            sum = sum + i; 
  
            // If sum = N, this means consecutive 
            // sequence exists 
            if (sum == N) 
            { 
                // found consecutive numbers! print them 
                for (int j = start; j <= i; j++) 
                    cout << j << " ";
  
                cout << endl;
                break; 
            } 
  
            // if sum increases N then it can not exist 
            // in the consecutive sequence starting from 
            // bottom 
            if (sum > N) 
                break; 
        } 
        sum = 0; 
        start++; 
    } 
} 


int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;

  printSum(n);
} 
*/
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

//  int *a=new int[n];
void printSums(int N) 
{ 
    int start = 1, end = 1; 
    int sum = 1; 
  
    while (start <= N/2) 
    { 
        if (sum < N) 
        { 
            end += 1; 
            sum += end; 
        } 
        else if (sum > N) 
        { 
            sum -= start; 
            start += 1; 
        } 
        else if (sum == N) 
        { 
            for (int i = start; i <= end; ++i) 
                cout << i << " ";
  
            cout << endl;
            sum -= start; 
            start += 1; 
        } 
    } 
} 



int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;

  printSums(n);
}
