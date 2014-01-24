#include<iostream>
#include<cstdlib>
using namespace std;
int *v;

int main()
{
int n,i,j,k,s,f,c;

while(cin>>n && n)
{
v=(int*)calloc(n,sizeof(int));

for(i=0;i<n;i++)cin>>v[i];
c=0;

for(i=0;i<n;i++)
{k=s=0;f=1;
for(j=i,k=0;k<n;j=(j+1)%n,k++){s+=v[j];if(s<0){f=0;break;}}
c+=f;
}
cout<<c<<endl;
}
return 0;
}





