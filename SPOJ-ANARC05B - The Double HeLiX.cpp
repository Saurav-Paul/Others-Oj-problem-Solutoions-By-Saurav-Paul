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
	int n1, n2;
	while(scanf("%d",&n1)==1 && n1){
		vector <int > num1, num2 ;
		map < int , int > m;
		for(int i =0 ; i< n1; i++){
			int temp ;
			scanf("%d",&temp);
			num1.eb(temp);
			m[temp] ++;
		}
		scanf("%d",&n2);
		for(int i=0 ; i< n2 ; i++){
			int temp ;
			scanf("%d",&temp);
			num2.eb(temp);
			m[temp] ++;
		}
				
		vector <int > prefix1(n1+1),prefix2(n2+1);
		
		for(int i=0; i< n1; i++){
			prefix1[i+1]  = prefix1[i] + num1[i];
		}
		
		for(int i=0; i< n2 ; i++){
			prefix2[i+1] = prefix2[i] + num2[i] ;
		}
		//~ ara_print(prefix1);
		//~ ara_print(prefix2);
		
		int answer = 0;
		int lastIndex1 =-1;
		int lastIndex2 =-1;
		for(auto x : m)
			if(x.second==2){
				int index1= (int)(lower_bound(all(num1),x.first)-num1.begin()) ;
				int index2= (int)(lower_bound(all(num2),x.first)-num2.begin()) ;
				
				int temp1 = prefix1[index1+1] - prefix1[lastIndex1+1];
				int temp2 = prefix2[index2+1] - prefix2[lastIndex2+1];
				answer += max(temp1,temp2);
				lastIndex1 = index1;
				lastIndex2 = index2;
				//~ debug() << dbg(lastIndex1) dbg(lastIndex2) dbg(temp1) dbg(temp2) dbg(x.first);
				
			}
			
		int temp1 = prefix1[n1]- prefix1[lastIndex1+1];
		int temp2 = prefix2[n2]- prefix2[lastIndex2+1];
		answer += max(temp1,temp2);
		
		printf("%d\n",answer);
		
	}

    return 0;
}
