				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define bug()				  debug() <<

using namespace std;
///////////////////////

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef PAUL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#ifdef ONLINE_JUDGE
#define cerr if (false) cerr
#endif
void time(){
	#ifdef PAUL
		cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	#endif
}
///////////////////////
const int INF = 1e9 + 99;
using ll = long long int ;
using pii = pair<int,int >;
using vec = vector<int> ;
const int nax = 100000 + 5;
vector< vec > graph(nax,vec ());
vector< vec > dp(nax,vec (2,-1));

int solve(int node , int taken , int parent){
	if(dp[node][taken] != -1)
		return dp[node][taken];
	int ans = 0;
	
	for(auto x : graph[node]){
		if(x != parent){
			if(taken)
				ans += min(solve(x,1,node),solve(x,0,node));
			else
				ans += solve(x,1,node);
		}
	}
	
	return dp[node][taken] = ans + taken;
}

int main()
{
	int n;
	scanf("%d",&n);
	
	
	for(int i=  1; i < n; i++){
		int a , b;
		scanf("%d%d",&a,&b);
		graph[a].eb(b);
		graph[b].eb(a);
	}
		
	int ans = min(solve(1,1,-1) , solve(1,0,-1));
	printf("%d\n",ans);
	
	time();
    return 0;
}
