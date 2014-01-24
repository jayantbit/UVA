//11023
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{

int num[10000]={0},i,k,l;
double j,rem;
string str;
char ch;
int t;
cin>>t;
getchar();

while(t--)
{
getline(cin,str);getline(cin,str);
stringstream s(str);

i=j=k=rem=0;
while(s>>ch)num[i++]=(int)ch-48;

if(i%2)
{
for(j=1;j*j<=num[0];j++);
j--;
cout<<j;
rem=num[0]-j*j;
j+=j;
}

for(l=i%2;l<=i-2;l+=2)
{
rem=rem*10 +num[l];
rem=rem*10 +num[l+1];
for(k=1;k<=10;k++)
if( ((j*10)+k)*k>rem)break;
k--;

cout<<k;
if(k)rem-=((j*10)+k)*k;
j=j*10 +k +k;
}

cout<<endl;
if(t)cout<<endl;
}
//system("pause");
return 0;
}
