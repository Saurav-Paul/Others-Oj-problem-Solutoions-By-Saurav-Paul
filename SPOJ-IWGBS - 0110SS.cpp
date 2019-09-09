				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define bug()				  debug() <<

using namespace std;
///////////////////////

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef PAUL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#ifdef ONLINE_JUDGE
#define cerr if (false) cerr
#endif
void time(){
	#ifdef PAUL
		cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	#endif
}
///////////////////////
const int INF = 1e9 + 99;
using ll = long long int ;
using pii = pair<int,int >;
using vec = vector<int> ;
string addString (string a, string b){
	int l1 = a.size() , l2 = b.size();
	if(l1 > l2){
		swap(a,b);
		swap(l1,l2);
	}
	string ans ="";
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	bool carry = false;
	
	for(int i = 0 ;i < l1 ; i++){
		int temp = (a[i]-'0') + (b[i]-'0') + (carry);
		carry = false;
		if(temp > 9){
			carry = true;
			temp = temp-10;
		}
		ans += (temp+'0');
	}
	for(int i = l1 ; i < l2 ; i++){
		int temp = (b[i]-'0') + (carry);
		carry = false;
		if(temp > 9){
			carry = true;
			temp = temp-10;
		}
		ans += (temp+'0');
	}
	if(carry) ans += '1';
	reverse(ans.begin(),ans.end());
	
	return ans;
}
class Bigint{
	public :
		string num="-1";
	
	Bigint operator + (Bigint &b){
		Bigint x;
		x.num = addString(num,b.num);
		return x;
	}

	
};

void solve(int n){
	
	Bigint x,y,temp;
	x.num ="1" , y.num = "0";
	
	while(n > 1){
		n--;
		temp = x;
		x = x + y;
		y = temp;;
	}
	
	x = x + x;
	x = x + y;
	
	cout << x.num << endl;
	
}

void testing(){
	while(1){
		string a , b;
		cin >> a >> b;
		Bigint x , y;
		x.num = a;
		y.num = b;
		x = x + y;
		cout << x.num << endl;
	}
}

int main()
{
	boost;
	int n;
	cin >> n;
	solve(n);
	time();
    return 0;
}
