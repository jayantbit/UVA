#include<stdio.h>
#include<stdlib.h>
#define mx 1000000
using namespace std;

int *a;
void fn()
{int i,j,k;
a=(int*)malloc((mx+1)*4);

for( i=2;i<=mx;i++)
{k=i;
for(j=2;j*j<=k;j++)
while(k%j==0){k/=j;
              a[i]++;
             }

if(k!=1)a[i]++;
if(i)a[i]+=a[i-1];
}
}

int main()
{fn();
int n;
while(scanf("%d",&n)!=EOF)printf("%d/n",a[n])
return 0;
}
