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
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;

ull remfact[21]={1,0};

ull fact(ull n)
{
  
return	remfact[n];
}


ull perm(string s)
{
    
    int ar[26]={0};
    
    int i,l=s.length();
    for(i=0;i<l;i++)
    ar[s[i]-'a']++;
    
    ull ans=fact(l);
    for(i=0;i<26;i++)
    ans/=fact(ar[i]);
    return ans;
}

ull spos(string s)
{
	string sorted=s;
	sort(sorted.begin(),sorted.end());
	ull ans=0;
	int i,j,k,l=s.length(),pos;
	for(i=0;i<l;i++)
	{
		pos=sorted.find(s[i]);
		//cout<<sorted<<" "<<pos<<" "<<fact(l-i-1)<<endl;
		int pp=0;
		for(pp=0;pp<pos;pp++)
		{
			if(pp && sorted[pp]==sorted[pp-1])continue;
			string temp=sorted;
			temp.erase(temp.begin()+pp);
			
			
			
        ans+=perm(temp);
        }
        sorted.erase(sorted.begin()+pos);
		
		
	}
	return ans;
}
//aabcd

string ans;
    
void next(string s,ull n)
{//aabcd
//abcd
     
      ull cur=0;
      int i=0,l=s.length();
      
      for(i=0;i<l;i++)
      {
                if(i && s[i]==s[i-1])continue;
                string temp=s;
                temp.erase(temp.begin()+i);
                ull p=perm(temp);
                if(n<=cur+p-1) {
                         ans.push_back(s[i]);
                        
                         next(temp,n-cur);
                         break;
                         }
                else {
                       cur+=p;
                     
                     }
      }              
}
   
   
   int test()
   {
     string str="acdeeffrzz";
	 string base=str;
	 int val=0;
	 do
	 {
	 	ans.clear();
	 	next(base,val);
	 //	cout<<val<<" "<<ans<<" "<<str<<endl;
	 	if(ans.compare(str)!=0 || spos(str)!=val ){
		 					   	  				   cout<<val<<" "<<spos(str)<<" "<<ans<<" "<<str<<endl;
														 return 0;
		 					   	  			      
														}
	 	val++;
 	}while(next_permutation(str.begin(),str.end()));
	 	
   	return 1;
   }   
  

int main()
{
//abcdefghijklmnopqrst 243290200817663999

string str,base;
int k,t;
ull n,val;
for(t=1;t<=20;t++)remfact[t]=t*remfact[t-1];
//cout<<test()<<endl;
cin>>t;

while(t-- && cin>>str>>n)
{
                
				
				  val=n;
				  val=min(val,perm(str)-1);
                  base=str;
                  sort(base.begin(),base.end());
                  next(base,val);
				  cout<<ans<<endl;
				  ans.clear();
}

}
