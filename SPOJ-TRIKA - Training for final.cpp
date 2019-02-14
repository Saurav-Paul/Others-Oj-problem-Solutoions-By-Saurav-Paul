#include <bits/stdc++.h>
using namespace std;
int main()
{
    int football_court[22][22];
    int power[22][22];
    int N,M,x,y;
    cin>>N>>M;
    cin>>x>>y;
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=M; j++)
        {
            cin>>football_court[i][j];
            power[i][j]=INT_MAX;

        }
    }

    power[x][y]=0;
    for(int i=x; i<=N; i++)
    {

        for(int j=y; j<=M; j++)
        {

            if(power[i][j+1]>(football_court[i][j+1]+power[i][j]))
                power[i][j+1]=(football_court[i][j+1]+power[i][j]);

            if(power[i+1][j]>(football_court[i+1][j]+power[i][j]))
                power[i+1][j]=(football_court[i+1][j]+power[i][j]);

        }


    }
    int temp=football_court[x][y]-power[N][M];

    if(temp<0)
        cout<<"N"<<endl;
    else
        cout<<"Y "<<temp<<endl;
    return 0;
}
