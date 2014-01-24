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


int fn(string s)
{
	int pos=1,i,l=s.length();
	if(l==0)return 1;
	for(i=0;i<l;i++)
	{
		if(s[i]=='L')pos=pos*2;
		else pos=pos*2 +1;
	}
	return pos;
}

int tree[100001]={0};

string str,path;




int fn2()
{
	
	int i;
	for(i=1;i<=100000;i++)
	if(tree[i]!=0 && i/2 && tree[i/2]==0)
	{
		 cout<<"not complete"<<endl;
		 return 0;
	}
	
	int first=1;
	for(i=1;i<=100000;i++)
	if(tree[i]!=0)
	{
	 if(!first)cout<<" ";
	 cout<<tree[i];
	 first=0;
    }
    cout<<endl;
	return 1;
}

int main()
{
	
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);	


int n,i,j,k,num,l,flag=1,end=0;
string ss;



while(cin>>ss)
{
	
	int pos,len=ss.length();
	  
	  if(ss.compare("()")==0){	if(flag)fn2();
    	else cout<<"not complete"<<endl;
		   
        memset(tree,0,sizeof(tree));
        flag=1;
	    continue;}
	  
	  pos=ss.find(",");
	  
	  string s1=ss.substr(1,pos-1);
	  string s2=ss.substr(pos+1);
	  s2=s2.substr(0,s2.length()-1);
	  
	  //cout<<s1<<" "<<s2<<endl;
	  stringstream s3(s1);
	  s3>>num;
	  pos=fn(s2);
	 // cout<<ss<<" "<<pos<<" "<<num<<endl;;
	  if(tree[pos]!=0)flag=0;
	  tree[pos]=num;
    
 }

return 0;
}

