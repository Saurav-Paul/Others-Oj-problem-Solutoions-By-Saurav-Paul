#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
using namespace std;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////
struct busy
{
  ll st;
  ll sp;

};

busy ara[1000009];
bool customSort(pair<ll,ll> a,pair<ll,ll> b){
    if(a.S<b.S)
        return true;
    if(a.S==b.S)
        return (a.F<b.F) ;
    return false ;

}

int main()
{

    FAST_IO();
    ////////////////////////
    tcase(){
        ll total;
        cin>>total;
        vector<pair<ll,ll>> vec;
        vector<ll>value;
        while(total--){
            ll a,b;
            cin>>a>>b;
            vec.pb(mp(a,b));
            value.pb(1);
        }
        ll ans=1;
        sort(vec.begin(), vec.end(),customSort); 
        ll ptime=vec[0].S;
        for(int i=1;i<vec.size();i++){
            if(vec[i].F>=ptime){
                ans++;
                ptime=vec[i].S;
            }
        }
        cout<<ans<<endl;
    }

    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
    return 0;
   }

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}
