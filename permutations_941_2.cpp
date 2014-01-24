#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>

using namespace std;

#define DEBUG
#define REP(i,a) for(i=0;i<a;i++)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define VE vector<int>
#define SZ size()
#define PB push_back
#define all(i) (i).begin(), (i).end()

vector<long long>factorial;

void perm(string cad1,int len,long long id)
{
    long long j=0,i,r,k;

    for(i=len;i>0;i--)
    {
        sort(cad1.begin()+j,cad1.end());

        for(k=0;k<i && factorial[i-1]*k<=id;k++)
            r=factorial[i-1]*k;

        swap(cad1[j],cad1[k+j-1]);
        j++;
        id-=r;
    }
    printf("%s\n",cad1.c_str());
}


int main()
{
/*
   freopen("input.txt","r",stdin);
*/
    long long test,id,i;
    factorial.PB(1);
    FOR(i,1,22)
        factorial.PB(factorial[i-1]*i);

    scanf("%lld",&test);
    while(test--)
    {
        string cad1;
        cin>>cad1;
        scanf("%lld",&id);
        perm(cad1,cad1.length(),id);
    }

/*
    fclose(stdin);
*/
   return 0;
}
