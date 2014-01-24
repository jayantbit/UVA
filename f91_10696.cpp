#include<iostream>
#include<map>
#include<cstdio>
using namespace std;
int f(int);
int get(int);
map <int,int> m;

int f(int n)
{if(n>=101)return n-10;
return get(get(n+11));
}

int get(int n)
{if(m[n])return m[n];
m[n]=f(n);
return m[n];
}

int get2(int n)
{if(n<=101)return 91;
return n-10;
}

int main()
{int n;
while(cin>>n && n)
printf("f91(%d) = %d\n",n,get2(n));

return 0;
}
