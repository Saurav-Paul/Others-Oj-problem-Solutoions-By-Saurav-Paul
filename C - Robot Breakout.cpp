#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	
	int rght = 1e5 , lft = -1e5;
	int up= 1e5 , down = -1e5;
	bool flag = true;
	
	int n; scanf("%d",&n);
	
	for(int i= 0 ; i  < n; i++){
		int x , y , a , b , c , d;
		scanf("%d%d%d%d%d%d",&x,&y,&a,&b,&c,&d);
		
		if(a == 0){
			
			if(rght < x)
				flag = false;
			lft = max(lft,x);
		}
		if(b == 0){
			
			if(down > y)
				flag = false;
			
			up = min(up,y);
		}
		
		if(c == 0){
			
			if(lft > x)
				flag = false;
				
			rght = min(rght,x);
			
		}
		
		if(d == 0){
			
			if(up < y)
				flag = false;
				
			down = max(down,y);
			
		}
		
	}
	if(lft > rght or up < down)
		flag = false;
		
	if(flag){
		printf("1 %d %d\n",lft,down);
	}
	else
		puts("0");
	
}
 
int main(){
	
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
		solve();
	
	return 0;
}
