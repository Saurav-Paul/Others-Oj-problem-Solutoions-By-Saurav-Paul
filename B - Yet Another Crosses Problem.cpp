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

void solve(){
	int n , m;cin >> n >>m;
	vector < string > s(n);
	for(int i = 0 ; i < n; i++)
		cin >> s[i];
	
	
	vector < int > row(n) , coloum(m);

	for(int i = 0  ; i < n; i++){
		int temp =0;
		for(int j =0 ; j < m ; j++){
			if(s[i][j]=='*')
				temp ++;
		}
		row[i] = temp;
	}

	for(int j = 0 ; j < m ; j++){
		int temp = 0;
		for(int i= 0 ; i < n; i++){
			if(s[i][j]=='*')
				temp ++;
			
		}
		coloum[j] = temp;
		
	}
	int mn = n+m-1;
	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < m ; j++){
			int cnt = (n-row[i]) + (m-coloum[j]);
			if(s[i][j]=='.')
				cnt --;
			mn = min(mn, cnt);
		}
	}
	
	cout << mn << endl;
}

int main()
{
	boost ;
	int n;
	cin >> n;
	while(n--)
		solve();
	
    return 0;
}
