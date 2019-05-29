						/*Saurav Paul*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost				  ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1e9+7
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
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
////////////////////////

template<typename T>T set_bit(T N,T pos){return N=N | (1<<pos);}
template<typename T>T reset_bit(T N,T pos){return N= N & ~(1<<pos);}
template<typename T> bool check_bit(T N,T pos){return (bool)(N & (1<<pos));}
template<typename T>void bin_print(T N){bitset<25>bit(N);cerr<<bit.to_string()<<"\n";}
template<typename T> void max_self(T &a, T b){
	a=max(a,b);
}
template <typename T > void min_self(T &a, T b){
	a=min(a,b);
}
template <typename T > void add_self(T &a, T b){
	a+=b;
}
////////////////////////

const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;;

template<typename T> void ara_read(T &v,ll n){
	ll temp;
	for(ll i=0; i< n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp);
	}
}
template<typename T> void ara_print(T &v){
	for(ll x : v)
		printf("%lld ",x);
	puts("");
}
////////////////////////

int main()
{
	char a[105],b[105] ;
	while(scanf("%s%s",a,b)==2){
		string s(a),t(b);
		int ssz=(int) s.size() , tsz=(int) t.size();
		vector < vector<int> > dp(ssz+1, vector <int> (tsz+1,0));
		// Variation of LCS problem.....
		
		for(int i=0; i< ssz ; i++)
			for(int j=0; j<tsz ; j++){
				if(s[i]==t[j]){
					dp[i+1][j+1] = dp[i][j] + 1;
				}
				else{
					dp[i+1][j+1] = max(dp[i][j+1] ,dp[i+1][j]);
				}
			}
			
		//~ printf("%d\n",dp[ssz][tsz]);
		
		
		//~ for(int i=0; i<= ssz ; i++){
			//~ for(int j=0; j<= tsz ; j++){
				//~ cout << dp[i][j]<<" ";
			//~ }
			//~ cout << endl;
		//~ }
		
		
		string ans = "";
		
		int i=ssz, j=tsz;
		while(i>0 or j>0){
			if(j==0){
				i--;
				while(i>=0){
					ans += s[i];
					i--;
				}
				break ;
			}
			else if(i==0){
				j--;
				while(j>=0){
					ans += t[j];
					j--;
				}
				break ;
			}
			else if(dp[i][j]==dp[i][j-1]){
				ans += t[j-1];
				j--;
			}else if(dp[i][j]==dp[i-1][j]){
				ans += s[i-1];
				i--;
			}else{
				ans += s[i-1];
				i--;
				j--;
			}
		}
		
		reverse(all(ans));
		cout << ans << "\n" ;
		//~ printf("%s\n",ans.c_str());
		
	}
	
    return 0;
}
