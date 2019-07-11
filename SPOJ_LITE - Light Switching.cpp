#include<bits/stdc++.h>
using namespace std;
class obj{
	public :
		int on = 0 , off = 0;
		bool switched = false;
	void exchange(){
		swap(on,off);
	}
};
vector < obj > tree;

void update_tree(int l , int r , int st , int sp , int node){

	if(st > r or sp < l)
		return ;
	if(st >= l and sp <= r){
		tree[node].switched ^=1;
		tree[node].exchange();
		return ;
	}
	int mid = st + ( (sp-st) >> 1);
	int lft = node << 1;
	int rght = lft + 1;
	update_tree(l , r , st , mid , lft);
	update_tree(l,r, mid + 1, sp , rght);
	tree[node].off = tree[lft].off + tree[rght].off;
	tree[node].on = tree[lft].on + tree[rght].on;
	if(tree[node].switched)
		tree[node].exchange();
}

void build_tree(int st , int sp , int node){
	
	if(st == sp){
		tree[node].off = 1;
		return ;
	}
	int mid = st + ( (sp-st) >> 1);
	int lft = node << 1;
	int rght = lft + 1;
	build_tree(st , mid , lft);
	build_tree(mid + 1, sp , rght );
	tree[node].off = tree[lft].off + tree[rght].off;
}

int query_tree(int l , int r , int st , int sp , int node , bool flag){
	if(sp < l or st > r)
		return 0;
	if(st >= l and sp <= r){
		if(!flag)
			return tree[node].on;
		else
			return tree[node].off;
	}
	flag ^= tree[node].switched;
	int mid = st + ( ( sp - st) >> 1);
	int lft = node << 1;
	int rght = lft + 1;
	int cnt = query_tree(l, r, st , mid , lft , flag);
	cnt	+= query_tree(l, r, mid + 1 , sp , rght , flag);
	return cnt;
	
}

int main(){
	int n , m ;
	scanf("%d%d",&n,&m);
	tree.resize(4*n);
	build_tree(1,n,1);

	while(m--){
		int op , l , r;
		scanf("%d%d%d",&op,&l,&r);
		switch(op){
			case 0 :
				update_tree(l,r,1,n,1);
				break ;
			case 1 :
				printf("%d\n",query_tree(l,r,1,n,1,false));
				break ;
			default :
				assert(false);
		}
	}
	
	return 0;
}
