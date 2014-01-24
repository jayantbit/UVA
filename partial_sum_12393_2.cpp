#include<iostream>
#include<cstdlib>
using namespace std;

int *c,*f;
void set(int j,int i){if(c[j]-c[i]<0)f[i]=-1;}
/*
0 1 3 6

0 1 2 3 c[0]      c[1]              c[2]           c[3]
1 2 3 0 c[1]-c[0] c[2]-c[0]         c[3]-c[0]      c[3]-c[0]+c[0]
2 3 0 1 c[2]-c[1] c[3]-c[1]         c[3]-c[1]+c[0] c[3]-c[1]+c[1]
3 0 1 2 c[3]-c[2] c[3]-c[2]+c[0]    c[3]-c[2]+c[1] c[3]-c[2]+c[2]
*/
int main()
{
int n,i,j,k,s,v;

while(cin>>n && n)
{
s=v=0;
c=(int*)calloc(n,sizeof(int));
f=(int*)calloc(n,sizeof(int));

for(i=0;i<n;i++)
{cin>>j;
s+=j;
c[i]=s;
if(s<0)v=-1;
for(k=0;k<i;k++)set(i,k);
}

//for(i=0;i<n;i++)cout<<c[i]<<" ";cout<<endl;


if(c[n-1]<0){cout<<"0"<<endl;continue;}


v++;

for(i=1;i<n-1;i++)
{j=c[n-1]-c[i];
if(f[i]==-1)continue;
for(k=0;k<i;k++)
if(j+c[k]<0){f[i]=-1;break;}
v+=f[i]+1;
}
v+=f[0]+1;

cout<<v<<endl;
//for(i=0;i<n-1;i++)cout<<f[i]<<" ";cout<<endl;

}

return 0;
}
