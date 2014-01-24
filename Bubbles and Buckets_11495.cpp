#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<bitset>
#include<map>
#include<set>
#include<climits>
#include<algorithm>
#include<utility>
#include<cstdlib>
#include<cctype>
#include<queue>
#include<sstream>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;
 

 
vector <int> arr; 
 
int n;
long long int inv=0; 
 
void merge(int l,int md,int r)
{
 int a=l,b=md+1,c=0,i;
 vector <int> temp(r-l+1);
 while(a<=md && b<=r)
 {
   if(arr[a]<arr[b])temp[c++]=arr[a++];
   else {
   		temp[c++]=arr[b++];
   	    inv+=md-a+1;
        }
 }
 while(a<=md)temp[c++]=arr[a++];
 while(b<=r)temp[c++]=arr[b++];
 
 for(i=l;i<=r;i++)arr[i]=temp[i-l];
}
 
void ms(int l,int h)
{
    
	if(l>=h || l<0 || h<0 || l> (n-1) || h>(n-1))return;
    int md=(l+h)/2;
    ms(l,md);
    ms(md+1,h);
    merge(l,md,h);
}
    
    
    
    
    
 
 
int main()
{
   //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
  
  int i,k;
  while(read(n) && n)
  {

  for(i=0;i<n;i++)
  {
    read(k);
   arr.push_back(k);
  }
  inv=0;
  ms(0,n-1);
  if(inv%2)cout<<"Marcelo\n";
  else cout<<"Carlos\n";
  arr.clear();
  }
  return 0;
}
