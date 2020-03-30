#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
/*******  All Required define Pre-Processors and typedef Constants *******/
#define mem(a, b) memset(a, (b), sizeof(a))
#define rep(i, k) for (int i = 0; i < k; i++)
#define repA(i, a, n) for (int i = a; i <= (n); ++i)
#define repD(i, a, n) for (int i = a; i >= (n); --i)
#define all(cont) cont.begin(), cont.end()
#define mp make_pair
#define pb push_back
#define INF 1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define LLINF 1e14
#define sz(a) int(a.size())
#define ff first
#define ss second
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vp;
typedef vector<vp> vvp;

const int N = 200 * 1000 + 5;
int add[N];
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 	int t; cin >> t;
 	while(t--){
 		int n, m, q, p, r, k; cin >> n >> m >> q >> p >> r >> k;

 		// if(n == 0){
 		// 	cout << 0 << ' ' << 0 << ' ' << (m - (k / r)) << ' ' << (q + (k / r)) << '\n';
 		// 	continue;
 		// }

 		mem(add, 0);

 		int rn = min(n, q);
 		n -= rn; q -= rn;

 		add[p] = rn;

 		int com = 0;
 		repA(i, 1, k){
 			n += add[i];
 			com += add[i];

 			if(i % r == 0 && m){
 				m--; q++;
 			}

 			if(n && q){
 				int temp = min(n, q);
 				n -= temp; q -= temp;
 				add[i + p] = temp;
 			}
 		}
 		cout << n << ' ' << com << ' ' << m << ' ' << q << '\n';
 	}       
	return 0;    
}
