using namespace std;
#include<iostream>
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
#include<cassert>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;
typedef pair<int,int> pr;

void preKMP(string pattern,int f[])
{
	
	int m=pattern.length(),i,k;
	f[0]=-1;
	
	for(i=1;i<m;i++)
	{
		k=f[i-1];
		while(k>=0)
		{
			if(pattern[i-1]==pattern[k])break;
			k=f[k];
		}
		f[i]=k+1;
	}
}



int KMP(string pattern,string target)
{
	
	int m=pattern.length(),n=target.length();
	int f[m],i=0,k=0;
	
	preKMP(pattern,f);
	
	while(i<n)
	{
		if(k==-1)
		{
			i++;k=0;
		}
		else if(pattern[k]==target[i])
		{
			i++;
			k++;
			if(k==m)k=0; //found
		}
		else k=f[k];
		
	
	}
	return k;
	
}

vector <string> word;

int main()
{
	int k,w,i,ans,pos,t,j;
	string s;
	
	cin>>t;
	while(t--)
	{
	
	cin>>k>>w;
	{
	   for(i=0;i<w;i++)
	   {
	   	cin>>s;
	   	word.push_back(s);
   	   }
		  
	  
	   
       
       ans=k;
       
	   
	   for(j=1;j<w;j++)
	   {
	   	
	   	   if(word[j].compare(word[j-1])==0)continue;
		   
		  
   	       
   	       ans+=k-KMP(word[j],word[j-1]);
	   	
	   }	  	
		
	}
	
	cout<<ans<<endl;
	word.clear();
	
	}
	
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

