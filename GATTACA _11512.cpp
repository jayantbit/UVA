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
using namespace std;
typedef  pair<int,int> pr;

vector <string> v;
set <string> st;
set <string>::iterator it1,it2;

bool compare(string a,string b)
{
     if(a.length()>b.length())return true;
     if(a.length()==b.length() && a.compare(b)<=0)return true;
     return false;
}

int comp(string a,string b)
{
    int i=a.length(),j=b.length(),len;
    len=min(i,j);
    for(i=0;i<len;i++)
    if(a[i]!=b[i])return i;
    return i;
}

int main()
{
string s,m,ans;
int i,j,k,len,mx,t;
cin>>t;
while(t-- && cin>>s)
{
    len=s.length();
    mx=0;
    for(i=len-1;i>=0;i--)st.insert(s.substr(i));
    it1=it2=st.begin();
    for(it2++;it2!=st.end();it2++,it1++)
    {
    j=comp(*it1,*it2);
    if(j)
         {
                      m=(*it1).substr(0,j);
                      v.push_back(m);
                     
         }
    }
    sort(v.begin(),v.end(),compare);
    len=v.size();
    j=0;
    for(i=0;i<len;i++)
    {k=0;
    for(it1=st.begin();it1!=st.end();it1++)
    if((int((*it1).find(v[i])))==0)k++;
    if(k>=2){cout<<v[i]<<" "<<k<<endl;j=1;break;}
    }
    
    
    if(!j)cout<<"No repetitions found!\n";
    st.clear();
    v.clear();
}
                      
                      
 
    
          
             



 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//system("pause");
return 0;
}
