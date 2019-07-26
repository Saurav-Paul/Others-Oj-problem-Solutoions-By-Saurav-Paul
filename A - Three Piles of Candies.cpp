#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int q; cin >> q;
	
	while(q--){
		long long int a, b, c, ans;
		cin >> a >> b >> c;
		ans = (a+b+c) / 2;
		cout << ans << endl; 
	}
	
	return 0;
}
