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
template<class T>void bin_print(T N){bitset<25>bit(N);cerr<<bit.to_string()<<"\n";}
template <class T > void max_self(T &a, T b){
	a=max(a,b);
}
template <class T > void min_self(T &a, T b){
	a=min(a,b);
}
template <class T > void add_self(T &a, T b){
	a+=b;
}
////////////////////////

const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;;

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
	int testcase; scanf("%d",&testcase);
	while(testcase--){
		int n, m; 
		scanf("%d%d",&n,&m);
		int grid[n][m];
		loop(i,0,n-1){
			loop(j,0,m-1){
				scanf("%d",&grid[i][j]);
			}
		}
		
		loop(i,1,n-1){
			loop(j,0,m-1){
				int maxi=0;
				if(j!=0){
					max_self(maxi,grid[i-1][j-1] + grid[i][j] );
				}
				if(j!=m-1){
					max_self(maxi,grid[i-1][j+1] + grid[i][j] );
				}
				
				max_self(maxi,grid[i-1][j]+grid[i][j]);
				
				grid[i][j]=maxi;
			}
		}
		
		int ans=0;
		loop(j,0,m-1){
			max_self(ans, grid[n-1][j]);
		}
		printf("%d\n",ans);
		
	}
	
	
    return 0;
}
