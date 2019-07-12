#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
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

int main()
{
	
	ll n , m , k;
	scanf("%lld%lld%lld",&n,&m,&k);
	ll op = 0, pos = k;
	vector <ll> ele(m);
	for(auto &x : ele)
		scanf("%lld",&x);
		
	ll lst = -1,cnt=0;
	ll p = m;
	for( ; m > 0; ){
		ll x = lower_bound(all(ele),pos)-ele.begin();
		if(ele[x] > pos)
			x--;
		
		int temp = x - lst;
		if(temp > 0){
			op ++ ;
			lst = x;
			cnt += temp;
			pos += temp ;
			m-=temp;
		}
		else{
			long long int lm = 1;
			if(x < p-1){
				lm = ele[x + 1] - pos;
				lm = max ( 1LL, lm/k);
			}
		
			pos += (lm*k);
		}
		
	}

	printf("%lld\n",op);
    return 0;
}
