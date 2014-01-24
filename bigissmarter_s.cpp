using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<limits>
#include<map>
#define LLU long long unsigned int
#define LLD long long double
#define FOR(i,N) for(int i=0;i<(N);i++)
#define MAXN 1010
int cnt[MAXN],parent[MAXN];
struct elephant
{
    int w,iq,index;
}inp[MAXN],temp;
bool fn(elephant a, elephant b)
{
    if(a.iq>=b.iq)
        return true;
    return false;
}
int main()
{
    int W,IQ,i=0,N;
    while(cin>>temp.w>>temp.iq)
    {
        temp.index=i+1;
        inp[i++]=temp;
    }
    N=i;
    sort(inp,inp+N,fn);
    FOR(i,9)
    cout<<inp[i].w<<" "<<inp[i].iq<<endl;
    FOR(i,MAXN)
    {
        cnt[i]=1;
        parent[i]=-1;
    }
    FOR(i,N)
    {
        FOR(j,i)
        {
            if( inp[i].w>inp[j].w && cnt[i]<cnt[j]+1 )
            {
                cnt[i]=cnt[j]+1;
                parent[i]=j;
            }
        }
    }
    int MAX=0,MAX_AT;
    FOR(i,N)
    {
        if(cnt[i]>MAX)
        {
            MAX=cnt[i];
            MAX_AT=i;
        }
    }
    vector<int> ans;
    while( parent[MAX_AT] != -1 )
    {
        ans.push_back(inp[MAX_AT].index);
        MAX_AT=parent[MAX_AT];
    }
    ans.push_back(inp[MAX_AT].index);
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    vector<int>::iterator it;
    for(it=ans.begin();it!=ans.end();it++)
        cout<<(*it)<<endl;
}
