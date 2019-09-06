				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s; cin >> s;
	
	int k = (int)s.size();
	
	int x = (n%k==0?k : n%k);
	
	long long int ans = 1;
	while(n >= x){
		ans *= n;
		n-=k;
	}
	cout << ans << endl;

    return 0;
}
