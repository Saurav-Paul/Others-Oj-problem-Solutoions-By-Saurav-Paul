#include<bits/stdc++.h>
#define nl '\n'
#define _time_ clock_t tStart = clock();
#define _show_ printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll long long int
#define loop(a,b)           for(ll i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vec(i)                vector<i>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);

using namespace std;
ll grid[50][50][50];
void FAST_IO();
int step;
int find_path(int x,int y,int cnt);
int main()
{
    // _time_
    FAST_IO();
    tcase(){
        
        cin>>step;
        cout<<find_path(25,25,0)<<endl;
        memset(grid,0,sizeof(grid));
        
    }

   //_show_
    return 0;
}
int find_path(int x, int y, int cnt){

    if(step==1)
        return 0;
    if(cnt==step){
        if(x==25 && y==25)
            return 1;
        else
            return 0;
    }
    if(cnt>step)
        return 0;
    if(grid[x][y][cnt])
        return grid[x][y][cnt];

    ll ans=0;
    ans+=find_path(x,y+1,cnt+1);
    ans+=find_path(x,y-1,cnt+1);
    ans+=find_path(x+1,y,cnt+1);
    ans+=find_path(x+1,y-1,cnt+1);
    ans+=find_path(x-1,y,cnt+1);
    ans+=find_path(x-1,y+1,cnt+1);
    grid[x][y][cnt]=ans;
    
    return ans;

}


void FAST_IO()
{
     ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}
