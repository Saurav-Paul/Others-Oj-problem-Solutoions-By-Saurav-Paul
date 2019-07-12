#include<bits/stdc++.h>
using namespace std;
vector <string > v(3);
inline int ctoi(char c){
	return c-'0';
}
inline int diff(char a, char b){
	return ctoi(a)-ctoi(b);
}
bool koutsu(){
	return (v[0]==v[1] and v[1]==v[2] and v[0]==v[2]);
}
bool shuntsu(){
	if(v[0][1]==v[1][1] and v[1][1]==v[2][1] and v[0][1]==v[2][1]){
		
		if(diff(v[1][0],v[0][0])==1 and diff(v[2][0],v[1][0])==1)
			return true ;
		
	}
	
	return false;
}

bool two_same(){
	return (v[0]==v[1] || v[1]==v[2] || v[0]==v[1]);
}

bool two_consecutive(){
	bool flag = false;
	if(v[0][1]==v[1][1]){
		flag = (diff(v[1][0],v[0][0])==1 or diff(v[1][0],v[0][0])==2);
		if(flag)
			return flag;
	}
	if(v[1][1]==v[2][1]){
		flag = (diff(v[2][0],v[1][0])==1 or diff(v[2][0],v[1][0])==2);
		if(flag)
			return flag;
	}
	if(v[0][1] == v[2][1]){
		flag = (diff(v[2][0],v[0][0])==1 or diff(v[2][0],v[0][0])==2);
		if(flag)
			return flag;
	}
	return flag;
}

int main(){
	ios_base::sync_with_stdio(false);
	for(int i = 0 ; i < 3 ; i++)
		cin >> v[i];
	sort(v.begin(),v.end());
	if(koutsu() || shuntsu()){
		cout << 0 << "\n";
	}
	else if(two_same() || two_consecutive()){
		cout << 1 << endl;
	}
	else{
		cout << 2 << endl;
	}
	return 0;
}
