#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;
vector<int> primelist;
bool check[1000090];
int factor[1000090];
int cnt[1000090][11];
void sieve(int n)
{
    int limit=sqrt(n*1.0)+1;
    primelist.push_back(2);
    factor[2]++;
    check[0]=check[1]=1;

    for(int i=4; i<=n; i+=2)
    {
        factor[i]++;
        check[i]=1;
    }
    for(int i=3; i<=n; i+=2)
    {
        if(!check[i])
        {
            primelist.push_back(i);
            factor[i]++;

            for(int j = i+i; j <=n; j+=i)

            {
                check[j]=1;
                factor[j]++;

            }

        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=10; j++)
            cnt[i][j]=cnt[i-1][j];
        cnt[i][factor[i]]++;


    }
}
int main()
{
    sieve(1000080);
    int num;
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        int a,b,x;
        cin>>a>>b>>x;
        int total=cnt[b][x]-cnt[a-1][x];
       cout<<total<<endl;

    }

}
