#include<iostream>
#include<vector>
#include<cstdio>
#include<iterator>
using namespace std;

int prime[1001]={0};
vector <int> v;
vector <int>::iterator it;

void sieve(int n)
{ prime[0]=1;
 for (int i=2; i*i<=n; i++)
 if (!prime[i])
 for (int k=i*i; k<=n; k+=i)
 prime[k]=1;
} 


void fn(int n,int c)
{v.clear();
printf("%d %d:",n,c);
int i,j,k=0;
for(i=1;i<=n;i++)if(!prime[i])v.push_back(i);
j=v.size();
it=v.begin();
advance(it,j/2);

if(j%2==0)
{   for(i=0;i<c &&  it!=v.begin();i++,it--);
          for(i=0;i<2*c && it!=v.end();it++,i++)cout<<" "<<*it;

}
else 
{   for(i=0;i<(2*c-1)/2 &&  it!=v.begin();i++,it--);
     for(i=0;i<2*c-1 && it!=v.end();it++,i++)cout<<" "<<*it;

}
cout<<endl<<endl;
}
 
 
 int main()
 {
     sieve(1000);
     int n,c;
     while(cin>>n>>c)fn(n,c);
     return 0;
}         



          




