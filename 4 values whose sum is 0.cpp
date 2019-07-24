#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int n; scanf("%d",&n);
	unordered_map<int, int > mymap;
	mymap.reserve(2500*2500+100);
	vector<int> a(n), b(n) , c(n) , d(n);
	for(int i= 0 ; i < n; i++){
		scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
	}
	
	for(int i = 0 ; i < n; i++)
		for(int j = 0 ; j < n ; j++)
			mymap[c[i] + d[j] ] ++;
	
	int total = 0;
	for(int i = 0 ; i < n; i++)
		for(int j = 0 ; j < n ; j++){
			int temp = a[i] + b[j];
			if(mymap.find(-temp) != mymap.end())
				total += mymap[-temp];
		}
	
	printf("%d\n",total);
	return 0;
}
