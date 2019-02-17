#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
bool custom_sort(int a,int b);
int main()
{
    while(cin>>n>>m)
    {
        if(!n && !m)
        {
            cout<<"0 0"<<endl;
            break;
        }
        ll temp;
        vector<ll>vec;
        for(int i=0; i<n; i++)
        {
            cin>>temp;
            vec.push_back(temp);

        }

        sort(vec.begin(),vec.end(),custom_sort);
        cout<<n<<" "<<m<<endl;
        for(int i=0; i<n; i++)
            cout<<vec[i]<<endl;

        vec.empty();

    }


    return 0;
}
bool custom_sort(int a,int b){

    if(a%m==b%m){
        if(abs(a)%2==abs(b)%2){

        if(a%2==0)
            return b > a;

        else
         return a > b;
        }
    else
        return abs(a)%2 > abs(b)%2 ;

    }
    else
        return a%m < b%m;

}
