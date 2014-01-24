using namespace std;
#include<iostream>
#include<cmath>

int s[100001]={0};

int main()
{
int c=0,i;
double d;
for(i=1;i<=100000;i++)
{d=sqrt(i);
if(ceil(d)==floor(d))c++;
s[i]=c;
}

while(cin>>c>>i && c && i)cout<<s[i]-s[c-1]<<endl;
return 0;
}
