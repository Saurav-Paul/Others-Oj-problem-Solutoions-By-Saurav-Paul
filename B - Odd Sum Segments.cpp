#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	
	int n , k;
	scanf("%d%d",&n,&k);
	vector<int> v(n);
	
	for(int &x : v){
		scanf("%d",&x);
	}
 
	vector<int> div;
	
	int cnt = 0;
	int	sum = 0;
	for(int i = 0 ; i < n ; i++){
		sum += v[i];
		if(cnt==k){
			div[k-1]=i+1;
			continue ;
		}
		if(sum&1){
			cnt ++;
			div.emplace_back(i+1);
			if(cnt < k)
				sum = 0;
		}
	}
	
	if(cnt == k and (sum==0 or sum&1)){
		puts("YES");
		
		for(int x : div)
			printf("%d ",x);
		puts("");
	}
	else
		puts("NO");
}
 
int main(){
	
	int n;
	scanf("%d",&n);
	while(n--)
		solve();
		
	return 0;
}
