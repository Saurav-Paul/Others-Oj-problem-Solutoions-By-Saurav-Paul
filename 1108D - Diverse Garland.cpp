				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;

const int nax = 2e5 + 10;
char s[nax];
string samp="RGB";
char find_perfect(char a,char b){
	for(auto x : samp){
		if(x != a and x != b)
			return x;
	}
	assert(false);
	return '?';
}
int main()
{
	int n ; 
	scanf("%d %s",&n,s);
	int cnt = 0;
	for(int i = 1 ; i < n ; i++)
		if(s[i-1]==s[i]){
			cnt ++ ;
			if(i==n-1){
				s[i] = find_perfect(s[i-1],s[i-1]);
			}
			else
				s[i] = find_perfect(s[i-1],s[i+1]);
		}

	printf("%d\n%s\n",cnt,s);
	
    return 0;
}
