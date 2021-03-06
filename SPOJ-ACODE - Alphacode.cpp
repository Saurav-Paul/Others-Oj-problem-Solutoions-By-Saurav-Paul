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
#define dbg(x)                cerr <<"( "<<#x << " = " << x << " )"<<endl
using namespace std;
template<class T >T set_bit(T N,T pos){return N=N | (1<<pos);}
template<class T >T reset_bit(T N,T pos){return N= N & ~(1<<pos);}
template<class T > bool check_bit(T N,T pos){return (bool)(N & (1<<pos));}
template <class T > void max_self(T &a, T b){
	a=max(a,b);
}
template <class T > void min_self(T &a, T b){
	a=min(a,b);
}
////////////////////////

const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<int> vec;;

void ara_read(vec &v,ll n){
	ll temp;
	for(ll i=0; i< n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp);
	}
}
void ara_print(vec &v){
	for(ll x : v)
		printf("%lld ",x);
	puts("");
}
////////////////////////

int main()
{
	boost;
	string s;
	while(cin>>s && s!="0"){
		
		int sz=(int) s.size();
		vector < int > dp(sz+1);
		
		/* Can be solved using dynamic Programming
		 * In this case base case is dp[0]=dp[1]=1
		 * whether i and i-1 can make an alphabet 
		 * then dp[i-2] will be added with dp[i]
		 * and if i is not equal 0 then dp[i-1] will be added with d[i]
		 * */
		 
		dp[0]=dp[1]=1;
		
		loop(i,1,sz-1){
			int temp = ctoi(s[i-1])*10 + ctoi(s[i]);
			
			if(temp<=26 && temp >9)
				dp[i+1] += dp[i-1] ;
			if(ctoi(s[i]))
				dp[i+1] += dp[i] ;
			
		}
		
		printf("%d\n",dp[sz]);
		
		
	}
    return 0;
}
