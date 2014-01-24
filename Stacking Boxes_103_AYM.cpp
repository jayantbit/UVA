#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,j,k;
        while(scanf("%d",&n)!=EOF)
        {
                scanf("%d",&m);
                int lis[n];
                vector<vector <int> >arr(n,vector<int>(m,0));
                memset(lis,1,sizeof(lis));
                for(i=0;i<n;i++)
                {
                        for(j=0;j<m;j++)
                        {
                                scanf("%d",&arr[i][j]);
                        }
                        sort(arr[i].begin(),arr[i].end());
                }
                for(i=1;i<n;i++)
                {
                        for(j=0;j<i;j++)
                        {
                                for(k=0;k<m;k++)
                                {
                                        if(arr[i][k]<arr[j][k])
                                        {
                                                break;
                                        }
                                }
                                if(k==m && lis[i]<1+lis[j])
                                {
                                        lis[i]=1+lis[j];
                                        //parent[i]=j;
                                }
                        }
                }
                int ans=lis[0];
                for(i=1;i<n;i++)
                {
                        if(ans<lis[i])
                        {
                                ans=lis[i];
                        }
                }
                printf("%d\n",ans);
        }
        return 0;
}
