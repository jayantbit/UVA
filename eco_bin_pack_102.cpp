#include<iostream>
#include<string>
#include<sstream>
#include<cstdio>
#include<algorithm>
using namespace std;

int fn(char ch)
{
if(ch=='B')return 0;
if(ch=='G')return 1;
return 2;
}

// B G C

int main()
{
int i,j,k,l;
string v,str;
unsigned long long int s;




while(getline(cin,str))
{
stringstream in(str);
unsigned long long int m=1<<31;
int a[3][3]={{0}};


for(i=0;i<3;i++)
for(j=0;j<3;j++)
in>>a[i][j];


str="BCG";

for(l=0;l<6;l++)
{
i=fn(str[0]);
j=fn(str[1]);
k=fn(str[2]);

s=a[1][i]+a[2][i];
s+=a[0][j]+a[2][j];
s+=a[0][k]+a[1][k];


//cout<<str<<" "<<s<<endl;
if(s<m){m=s;v=str;}
next_permutation(str.begin(),str.end());

}

cout<<v<<" "<<m<<endl;
}


return 0;
}



