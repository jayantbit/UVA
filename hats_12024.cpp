using namespace std;
#include<iostream>
typedef unsigned long long int ull;

ull f[13]={1,1,0};
//http://www.askiitians.com/iit-jee-algebra/permutations-and-combinations/derangements-and-multinomial-theorem.aspx
void set()
{for(int i=2;i<=12;i++)f[i]=i*f[i-1];}


double fn(ull n)
{double s=0;
int r=0,k=1;
for(r=0;r<=n;r++,k*=-1)
s+=k*((double)f[n]/f[r]);

return s;

}




int main()
{
set();
ull n;
int t;
cin>>t;

while(t-- && cin>>n)
cout<<(ull)fn(n)<<"/"<<f[n]<<endl;
return 0;
}


