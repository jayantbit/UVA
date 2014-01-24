#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
vector <char> s;
vector <int> prime(2001);
void sieve(int n)
{
   prime[0]=1;
prime[1]=1;
int m=(int)sqrt(n);
for (int i=2; i<=m; i++)
if (!prime[i])
for (int k=i*i; k<=n; k+=i)
prime[k]=1;

} 

int main()
{
    char ch;
    int i,j,k,l,m,t,n=0;
    sieve(2000);
    cin>>t;
    getchar();
    while(n++<t)
    {
    m=0;
    while( (ch=getchar())!='\n')s.push_back(ch);
    cout<<"Case "<<n<<": ";
    sort(s.begin(),s.end());
    j=s.size();
    for(i=0;i<j-1;i+=l)
    {l=1;
    for(k=i+1;k<j;k++,l++)
    if(s[k]!=s[i])break;
    if(!prime[l]){cout<<s[i];m=1;}
    }
    if(!m)cout<<"empty";
    cout<<endl;
    s.clear();
    }
    
    return 0;
}
