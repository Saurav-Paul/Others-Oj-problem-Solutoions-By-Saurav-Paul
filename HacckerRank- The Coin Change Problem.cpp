#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	
	
	int n, m;
	scanf("%d%d",&n,&m);
	vector <int > coins(m);
	for(int &x : coins)
		scanf("%d",&x);
	
	vector <ll> dp(n+1);
	dp[0]=1;
	
	for(int x : coins){
		for(int i=1;i <= n; i++){
			if(x <= i ){
				dp[i]+=dp[i-x];
			}
		}
	}

	printf("%lld\n",dp[n]);
	
	return 0;
}
