#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,s1,s2;
	scanf("%d%d%d",&l,&s1,&s2);
	int q;
	scanf("%d",&q);
	while(q--){
		double t ;
		scanf("%lf",&t);
		 t = abs(sqrt(t*2.0) - (l*sqrt(2.0))) / (1.0 *abs(s1-s2) );
		printf("%.9lf\n",t);
	}
    return 0;
}
