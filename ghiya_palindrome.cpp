#include <stdio.h>
#include <string>
#include <iostream>

int min(int a,int b)
{
if(a<b)
return a;
else
return b;    
}

using namespace std;

int dp[501][501];

int is_palin(string s,int low,int high)
{

if(dp[low][high]!=0)
return dp[low][high];

if(low>=high)
{
return 0;
}

if(s[low]==s[high])
{                       

dp[low+1][high-1]=is_palin(s,low+1,high-1);
return dp[low+1][high-1];

}

else
{

int t1=is_palin(s,low+1,high)+1;
int t2=is_palin(s,low,high-1)+1;

if(t1<t2)
dp[low+1][high]=t1;

else
dp[low][high-1]=t2;

return min(t1,t2);

}

}

string str;

int fn(int i,int j)
{   
     if(i>j)return 0;
	 if(i==j){cout<<str[i];return 0;}
	
	if(str[i]==str[j])
	{
		cout<<str[i];
		fn(i+1,j-1);
		cout<<str[i];
		
	}
	else if(dp[i][j-1]<dp[i+1][j])
	{
		cout<<str[j];
		fn(i,j-1);
		cout<<str[j];
		
	}
	else
	{
		cout<<str[i];
		fn(i+1,j);
		cout<<str[i];
		
	}
}

int main()
{
int i,j,a;

string s;



while(cin>>s)
{
a=s.length();

for(i=0;i<a;i++)
for(j=0;j<a;j++)
dp[i][j]=0;

dp[0][a-1]=is_palin(s,0,a-1);

for(i=0;i<a;i++)
{
for(j=0;j<a;j++)
{
printf("%d ",dp[i][j]);
}
printf("\n");
}

str=s;
fn(0,a-1);cout<<endl;


}
return 0;


}



