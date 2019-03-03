#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
using namespace std;
ll ara[5];

int main()
{

    ios_base::sync_with_stdio(0);
    tcase(){
        ll x,n;
        cin>>x>>n;
        if(!n){
        cout<<1<<endl;
        continue ; 
        }

        ll k=1;
        for(int i=1;i<=4;i++){
            k*=x;
            ara[i]=k;
        }
        ara[0]=ara[4];
        cout<<ara[n%4]%10<<endl;
    }

    return 0;
   }

