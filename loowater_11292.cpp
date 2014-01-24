#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> h,k;

int main()
{
int n,m,i,j,c,s;


while(cin>>n>>m && n && m)
{
for(i=0;i<n;i++)
{cin>>j;
h.push_back(j);
}
for(i=0;i<m;i++)
{cin>>j;
k.push_back(j);
}
sort(h.begin(),h.end());
sort(k.begin(),k.end());

j=c=s=0;
for(i=0;i<n;i++)
{
                
                while(j<m && k[j]<h[i])j++;
                if(j>=m){s=1;break;}
                c+=k[j];
                j++;
}
if(s)cout<<"Loowater is doomed!"; else cout<<c;
cout<<endl;
h.clear();
k.clear();
}
return 0;
}
