#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
class obj{
	public :
		long long int prop,sum;
};
using vec = vector <obj> ;

void update_tree(vec &tree,ll value, ll l , ll r , ll st , ll sp , ll node){
	if(sp < l or st > r)
		return ;
	if(l <= st and r >= sp){
		tree[node].prop += value;
		tree[node].sum += (sp-st + 1) * value;
		return ;
	}
	ll mid = st + ((sp-st)>>1);
	ll lft = node << 1;
	ll rght = lft + 1;
	update_tree(tree,value,l,r,st,mid,lft);
	update_tree(tree,value,l,r,mid+1,sp,rght);
	tree[node].sum = tree[lft].sum + tree[rght].sum + (sp-st+1) * tree[node].prop;
	
}

ll query_tree(vec &tree, ll l , ll r , ll st , ll sp , ll node,ll carry){
	if(st > r or  sp < l)
		return 0;
	if(st >= l and sp <= r)
		return tree[node].sum + carry *(sp-st+1);
	ll mid = st + ((sp-st)>>1);
	ll lft = node << 1;
	ll rght = lft + 1;
	ll sum = query_tree(tree,l,r,st , mid , lft,carry+tree[node].prop);
	sum += query_tree(tree, l , r , mid + 1 , sp , rght,carry+tree[node].prop);
	return  sum ;
}

void solve(){
	long long int n, q;
	scanf("%lld%lld",&n,&q);
	vec tree(4*n+10);
	while(q--){
		int op ;
		scanf("%d",&op);
		if(op==0){
			long long int l , r , value;
			scanf("%lld%lld%lld",&l,&r,&value);
			update_tree(tree,value,l,r,1,n,1);
		}
		else if(op==1){
			long long int l , r;
			scanf("%lld%lld",&l,&r);
			long long int sum = query_tree(tree,l,r,1,n,1,0);
			printf("%lld\n",sum);

		}
		else
			assert(false);
		
	}

}

int main(){
	int testcase ;
	scanf("%d",&testcase);
	while(testcase--)
		solve();

	return 0;
}
