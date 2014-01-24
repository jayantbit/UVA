#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

/*
9 2 5 3 7 11 8 10 13 6
1 1 2 2 3 4 4 5 6 3
*/

vector <int> a,l;
int i,j,k,n,t=0;

void fn()
{  if(t)cout<<endl;
    reverse(a.begin(),a.end());

    
    k=0;n=a.size();
    l.push_back(1);

    for(i=1;i<n;i++)
    {for(j=k=0;j<i;j++)if(a[j]<a[i])k=max(k,l[j]);
    l.push_back(k+1);
    }

    sort(l.begin(),l.end());
cout<<"Test #"<<++t<<":"<<endl;
cout<<"  maximum possible interceptions: "<<l[n-1]<<endl;
     a.clear();
     l.clear();
}

int main()
{
    int m;
    while(cin>>m)
{if(m==-1)
  {if(!a.size())break;
   else fn();
  }
else a.push_back(m);
 }

return 0;
}



