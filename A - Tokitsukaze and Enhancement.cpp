#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1e9+7
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);

using namespace std;

int main()
{
	int x ;
	scanf("%d",&x);
	if(x%4==1){
		printf("0 A\n");
		return 0;
	}
	if(x%4==2){
		printf("1 B\n");
		return 0;
	}
	if(x%4==0){
		printf("1 A\n");
		return 0;
	}
	if(x%4==3){
		printf("2 A\n");
		return 0;
	}
    return 0;
}
