#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
using namespace std;

bool check(string &s, string &t){
	
	int lens = (int)s.size();
	int lent = (int)t.size();
	int i = 0 , j = 0 , cnt = 0;
	while(i < lens and j < lent){
		if(s[i] == t[j]){
			cnt ++;
			i++ , j ++;
		}
		else
			j++ ;
	}

	return (cnt==lens);
}

void solve(){
	
	string s,t,p;
	cin >> s >> t >> p;
	vector <int > va(29), vb(29),vs(29);
	for(auto x : s)
		vs[x-'a']++;
	for(auto x : p)
		va[x-'a']++;
		
	for(auto x : t)
		vb[x-'a'] ++;
	bool flag = true;
	
	for(int i = 0 ; i < 29 ; i++)
		if(va[i]+vs[i] < vb[i] or vs[i] > vb[i]){
			flag = false;
			break ;
		}

	if(flag){
		flag = check(s,t);
	}
	
	cout << (flag?"YES":"NO") << endl;
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
