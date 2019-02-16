#include <bits/stdc++.h>
using namespace std;
char grid[111][111];
bool isvisited[111][111];
int x,y;
string s="ALLIZZWELL";
vector<long long int>posx;
vector<long long int>posy;
void check(long long px,long long py,int spos);
bool flag;
int main()
{
        int tcase;
        cin>>tcase;
        while(tcase--)
        {
                flag=0;
                cin>>x>>y;
                for(int i=1; i<=x; i++)
                {
                        for(int j=1; j<=y; j++)
                        {

                                cin>>grid[i][j];
                                if(grid[i][j]=='A')
                                {
                                        posx.push_back(i);
                                        posy.push_back(j);

                                }

                        }
                }


                for(int i=0; i<posx.size(); i++)
                {

                        check(posx[i],posy[i],0);

                }


                if(flag)
                        cout<<"YES"<<endl;
                else
                        cout<<"NO"<<endl;
                posx.clear();
                posy.clear();
                memset(isvisited,0,sizeof(isvisited));
                memset(grid,0,sizeof(grid));

        }


        return 0;
}
void check(long long px,long long py,int spos)
{


        if(flag)
                return;
        if(isvisited[px][py])
                return;
        if(spos==s.size()-1)
        {
                flag=1;
                return;

        }

        isvisited[px][py]=1;
        char c=s[spos+1];
        if(c==grid[px+1][py])
                check(px+1,py,spos+1);

        if(c==grid[px+1][py+1])
                check(px+1,py+1,spos+1);

        if(c==grid[px][py+1])
                check(px,py+1,spos+1);

        if(c==grid[px-1][py+1])
                check(px-1,py+1,spos+1);

        if(c==grid[px-1][py])
                check(px-1,py,spos+1);

        if(c==grid[px-1][py-1])
                check(px-1,py-1,spos+1);

        if(c==grid[px][py-1])
                check(px,py-1,spos+1);

        if(c==grid[px+1][py-1])
                check(px+1,py-1,spos+1);

        isvisited[px][py]=0;

}
