				/*Saurav Paul*/
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

string find_parrent(string &s, map<string,string> &parrent){
	if(s==parrent[s])
		return s;
	return parrent[s] = find_parrent(parrent[s],parrent);
	
}

void solve(){
	string s, t;
	int n; cin >> n;
	vector < pair<string,string > > friendship;
	map<string,string> parrent;
	map < string , int > cnt;
	for(int i= 0 ; i < n; i++){
		cin >> s >> t;
		friendship.emplace_back(s,t);
		parrent[s] = s;
		parrent[t] = t;
		cnt[s] = 1;
		cnt [t] = 1;
	}
	
	for(int i = 0 ; i < n; i++){
		string p1 = find_parrent(friendship[i].first,parrent);
		string p2 = find_parrent(friendship[i].second,parrent);
		if(p1 != p2){
			parrent[p1] = p2;
			cnt[p2] += cnt[p1];
			cnt[p1] = 0;
		}
		
		cout << cnt[find_parrent(p1,parrent)] << endl;
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int testcase; cin >> testcase;
	while(testcase--)
		solve();
	
	
    return 0;
}
