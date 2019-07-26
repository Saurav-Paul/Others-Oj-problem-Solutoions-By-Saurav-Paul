#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;
const int nax = 2e5+10;
char s[nax];
 
void solve(){
	int n , k ; scanf("%d%d",&n,&k);
	scanf("%s",s);
	
	string s1 = "RGB", s2 = "GBR" , s3 = "BRG";
	int mn = k;
	for(int i = 0 ; i <= n-k ; i++){
		int c1 = 0 , c2 = 0 , c3 = 0;
		for(int j = 0 ; j < k ; j++){
			if(s1[j%3] != s[i+j])
				c1 ++;
			
			if(s2[j%3] != s[i+j])
				c2 ++;
			
			if(s3[j%3] != s[i+j])
				c3++;
		}
		mn = min({mn,c1,c2,c3});
	}
	printf("%d\n",mn);
}
 
int main()
{
	int q;
	scanf("%d",&q);
	while(q--)
		solve();
		
    return 0;
}
