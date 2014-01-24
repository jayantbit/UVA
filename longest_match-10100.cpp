#include<iostream>
#include<string>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<sstream>
#include<cstdio>
#include<cctype>
#include <fstream>
#include<vector>
using namespace std;

    string a,b,ans;
    int c[1000][1000]={{0}};
    
    int get(int x,int y)
    { if(x<0 || y<0)return 0;
    return c[x][y];
    }  
 
    void lcs(int x,int y)
    { 
    if(a[x]==b[y] || !isalpha(a[x]) || !isalpha(b[y]))c[x][y]=get(x-1,y-1)+1;
    else c[x][y]=max(get(x-1,y),get(x,y-1));
    }
    
    
    int main()
    {
        
    getline(cin,a);
    getline(cin,b);
    int x=a.length(),y=b.length(),i,j;
    
    for(i=0;i<x;i++) // first string
    for(j=0;j<y;j++) //second string
    lcs(i,j);
    i--;
    j--;
    
    
    while(i>=0 && j>=0 && c[i][j]>0)
    {
    if(a[i]==b[j])
    {ans.push_back(a[i]); i--;j--;}

    else if(get(i-1,j)>get(i,j-1))i--;
    else j--;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
   
   system("pause");
   }
    
    
