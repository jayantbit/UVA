#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;

vector <double> g;
vector <double> b;

int main()
{
    int i,j;
    double m;
    
while(scanf("%d",&j)!=EOF)
{
             for(i=0;i<j/2;i++)
             {
                               scanf("%lf",&m);
                               g.push_back(m);
             }
             for(i=0;i<j/2;i++)
             {
                                scanf("%lf",&m);
                               b.push_back(m);
             }
             sort(g.begin(),g.end());
             sort(b.begin(),b.end());
             
             for(i=0,m=0;i<j/2;i++)m+=g[i]*b[i];
             
             printf("%0.4lf\n",m);
             g.clear();
             b.clear();
}
return 0;
}
             
             
             
             
