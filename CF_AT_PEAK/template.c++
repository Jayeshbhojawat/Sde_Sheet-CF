//Author: Jayesh
#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define vi vector <int>
#define lop(i, n) for (int i=0 ; i < n;i++)
#define input(v, n) lop(i, n) cin >> v[i]
#define take(x)       \
    for (auto &y : x) \
    cin >> y
#define show(x)           \
    for (auto y : x)      \
        cout << y << " "; \
    cout << endl
#define output(v, n) lop(i, 0, n) cout << v[i] >> " "
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
int gcd(int a, int b)
{
	if (a == 0)	return b;
	if (b== 0)return a;
	if (a == b) return a;
	if (a > b) return gcd(a-b, b);
     return gcd(a, b-a);
}
bool isPrime(ll n)              
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
 
    for (ll i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    return true;
}
int reversDigits(int num)
{
   static int rev_num = 0;
   static int base_pos = 1;
    if (num > 0) {
        reversDigits(num / 10);
        rev_num += (num % 10) * base_pos;
        base_pos *= 10;
    }
    return rev_num;
}
void solve()
{
  
}
int main()
{
    fio;
    ll tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
