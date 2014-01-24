using namespace std;
#include<iostream>
#include<cstdio>
#include<map>

map <long long int,int> m;
long long int cat[55]={1,0};

//http://en.wikipedia.org/wiki/Catalan_number
// 1 1 2 5 14 42
//Cn+1=2(2n+1)Cn/n+2
//C0=1



int main()
{
int i,n;
m[1]=0;

for(i=0;i<51;i++)
{
cat[i+1]=2*(2*i+1)*cat[i]/(i+2);
m[cat[i+1]]=i+1;
}



while(cin>>n)
{
cout<<m[n]<<endl;
}



return 0;
}



